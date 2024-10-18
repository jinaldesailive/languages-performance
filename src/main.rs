use std::time::Instant;

// Recursive Fibonacci function
fn fibonacci(n: u32) -> u32 {
    if n <= 1 {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

fn main() {
    let start = Instant::now();

    let result = fibonacci(35);  // Example input
    println!("Fibonacci result: {}", result);

    let duration = start.elapsed();
    println!("Execution time: {:?}", duration);
}
