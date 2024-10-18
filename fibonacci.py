import time

# Fibonacci Function
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

# Measure time
start_time = time.time()
result = fibonacci(35) 
end_time = time.time()

print(f"Fibonacci result: {result}")
execution_time = end_time - start_time
print(f"Execution time: {execution_time} seconds")
