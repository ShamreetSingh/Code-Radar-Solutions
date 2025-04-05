def move_zeros_to_end(arr):
    non_zero = [num for num in arr if num != 0]
    zeros = [0] * (len(arr) - len(non_zero))
    return non_zero + zeros

n = int(input())  
arr = list(map(int, input().split()))  

result = move_zeros_to_end(arr)
print(*result)
