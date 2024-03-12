#include <iostream>
#include <string>
#include <cstdint>
#include <chrono>

using namespace std;

// ANSI escape codes for colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    int32_t* myArr = new int32_t[5000000000];
    int32_t dummyReadValue = 0;
    double totalTime;
    
    auto start = chrono::high_resolution_clock::now();

    // Write to 5 × 10^9 different array elements, 4 bytes each time
    for(long long int i = 1; i <= 5000000000; i++){
            myArr[i-1] = i;
    }

    // Read from 5 × 10^9 different array elements, 4 bytes each time
    for(long long int i = 1; i <= 5000000000; i++){
            dummyReadValue = myArr[i-1];
    }
