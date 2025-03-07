def is_prime(n):
    if n < 2:
        return 0
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return 0
    return 1

# Read input
num_inputs = int(input())
for _ in range(num_inputs):
    num = int(input())
    print(is_prime(num))
