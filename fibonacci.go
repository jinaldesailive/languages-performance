package main

import (
	"fmt"
	"time"
)

// Recursive Fibonacci function
func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
	start := time.Now()

	result := fibonacci(35)  // Example input
	fmt.Println("Fibonacci result:", result)

	elapsed := time.Since(start)
	fmt.Printf("Execution time: %s\n", elapsed)
}
