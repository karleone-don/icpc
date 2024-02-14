import math
def totient(n):
    result = n
    for a in range(2, int(math.sqrt(n)) + 1):
        if n % a == 0:
            while n % a == 0:
                n /= a
            result *= (1 - (1 / a))
    if n > 1:
        result *= (1 - (1 / n))
    return result

k = int(input())
totient_list = [int(totient(i)) for i in range(1, 10001)]
print(totient_list)
for r in range(k):
    n = int(input())
    H = 0
    
    H = sum(totient_list[:n]) ** 2
    print(H)