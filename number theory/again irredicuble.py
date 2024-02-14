import math

n = -1
while n != 0:
    n = int(input())
    result = n
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            while n % i == 0:
                n /= i
            result *= (1.0 - (1.0 / i))
    if n > 1:
        result *= (1.0 - (1.0 / n))
    if n != 0:
        print(int(result))

