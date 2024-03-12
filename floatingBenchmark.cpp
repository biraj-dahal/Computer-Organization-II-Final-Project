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
    double dummyValue = 8.4;
    double res = 1.2;

    // 10^10 additions (of double precision floating point constants)
    auto start = chrono::high_resolution_clock::now();
