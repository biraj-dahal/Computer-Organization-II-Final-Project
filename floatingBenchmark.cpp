#include <iostream>
#include <string>
#include <chrono>

using namespace std;

// ANSI escape codes for colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    double totalTime;
    int32_t dummyValue = 7;
    int32_t res = 0;

    // 10^10 additions (of integer constants)
    auto start = chrono::high_resolution_clock::now();
