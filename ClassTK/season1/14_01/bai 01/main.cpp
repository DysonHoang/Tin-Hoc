def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def digit_sum_even(n):
    return sum(int(digit) for digit in str(n)) % 2 == 0

def count_primes_with_even_digit_sum(A, B):
    count = 0
    for num in range(A, B + 1):
        if is_prime(num) and digit_sum_even(num):
            count += 1
    return count

# Đọc dữ liệu từ file input
with open('Cau1b.inp', 'r') as file:
    A, B = map(int, file.readline().split())

# Tính kết quả
result = count_primes_with_even_digit_sum(A, B)

# Ghi kết quả vào file output
with open('Cau1b.out', 'w') as file:
    file.write(str(result))
