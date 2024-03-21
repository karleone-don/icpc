import math
c = int(input())
for i in range(c):
    s = input()
    a, b = map(int, s.split())
    print(math.comb(a, b))