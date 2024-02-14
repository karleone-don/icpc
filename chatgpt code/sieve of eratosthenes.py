def sieve_of_eratosthenes(n):
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False
    
    p = 2
    while p ** 2 <= n:
        if primes[p]:
            for i in range(p ** 2, n + 1, p):
                primes[i] = False
        p += 1
    
    result = []
    for i in range(2, n + 1):
        if primes[i]:
            result.append(i)
    
    return result

# Пример использования:
n = 30
print("Простые числа до", n, ":", sieve_of_eratosthenes(n))
