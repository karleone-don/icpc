import math

def euler_phi(n):
    result = n
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            while n % i == 0:
                n //= i
            result *= (1.0 - (1.0 / i))
    if n > 1:
        result *= (1.0 - (1.0 / n))
    return int(result)

n = int(input("Введите число n: "))
print("Количество взаимно простых чисел с", n, "до", n, ":", euler_phi(n))
