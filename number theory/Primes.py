import sys
import math

def prime(n):
    is_prime = [True for i in range(n + 1)]
    is_prime[0], is_prime[1] = False, False

    for i in range(2, int(math.sqrt(n)) + 1):
        for j in range(i * i, n + 1, i):
            is_prime[j] = False
    return is_prime

is_prime = prime(10000001)

cnt = [0 for i in range(10000001)]

for i in range (2, 10000001):
    if is_prime[i]: cnt[i] = cnt[i-1] + 1;
    else: cnt[i] = cnt[i-1];

for s in sys.stdin:
    a, b = map(int,s.split())
    print(cnt[b] - cnt[a - 1])
    print()