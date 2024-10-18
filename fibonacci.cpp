#include <iostream>
#include <chrono>  // To measure execution time

using namespace std;

// Recursive Fibonacci function
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 35;  // Example input

    // Start measuring time
    auto start = chrono::high_resolution_clock::now();

    // Calculate Fibonacci
    int result = fibonacci(n);
    cout << "Fibonacci result: " << result << endl;

    // Stop measuring time
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;

    // Output execution time
    cout << "Execution time: " << elapsed.count() << " seconds" << endl;

    return 0;
}
