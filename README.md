# Performance Comparison
Performance comparison between Python, Golang, Rust and C++ using simple Fibonacci code.

## Python

```
python --version
python fibonacci.py
```

## Golang

```
go version
go build fibonacci.go
./fibonacci
```

## Rust

```
rustc --version
cargo build --release
./target/release/fibonacci_project
```

## C++

```
g++ --version
g++ -O3 -o fibonacci fibonacci.cpp
```

## Result

| Language | Execution Time (Milliseconds) | Rank |
| -- | -- | -- |
| C++ | 15.694 | 1 (Fastest) |
| Rust | 22.095 | 2 |
| Go | 39.5754 | 3 |
| Python | 1329.56 | 4 (Slowest) |
