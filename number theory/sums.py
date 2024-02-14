import math

t = int(input())

for i in range(t):
    n = int(input())
    flag = False
    for d in range(2, int(math.sqrt(2 * n)) + 1):
        if 2 * n % d == 0:
            a = (2 * n) // d + 1 - d
            if a % 2 == 0:
                a //= 2
                print(n, "=", a, end ="")
                for i in range(1, d):
                    print(" +", a + i, end ="")
                print()
                flag = True
                break
    if not flag:
        print("IMPOSSIBLE")
