import math
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

primes = sieve_of_eratosthenes(1000000)
t = int(input())
for _ in range(t):
    s = input()
    a, b = map(int, s.split())
    len_prime = 0
    while math.sqrt(b) > primes[len_prime]:
        len_prime += 1
    sum = 0
    for i in range(len_prime):
        c = primes[i] ** 2
        while c <= b:
            if c >= a:
                sum += 1
            c *= primes[i]
    print(sum)
    