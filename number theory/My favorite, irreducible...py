import math

a = int(input())
sum = 0

for i in range(2, a + 1):
    result = i
    n = i
    for j in range(2, int(math.sqrt(n)) + 1):
        if n % j == 0:
            while n % j == 0:
                n /= j
            result *= (1.0 - (1.0 / j))
    if n > 1:
         result *= (1.0 - (1.0 / n))               

    sum += result

print(int(sum))