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

def factor(n, primes):
    i = 0
    while n > 1 and primes[i] < n:
        if not n % primes[i]:
            c = 0
            while n % primes[i] == 0:
                n //= primes[i]
                c += 1
            if c > 1:
                print(f"{primes[i]}^{c}", end="")
            else:
                print(primes[i], end="")
            if n > 1:
                print(" * ", end="")
        i += 1
    if n > 1:
        print(n)
    else:
        print()

c = int(input())
primes = sieve_of_eratosthenes(100000)

for i in range(c):
    s = input()
    a, b = map(int, s.split())
    n = math.comb(a, b)
    if n > 1:
        factor(n, primes)
    else:
        print(1)