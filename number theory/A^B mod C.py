import sys

for s in sys.stdin:

  a, b, c = map(int,s.split())

  print(pow(a, b, c))