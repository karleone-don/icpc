from queue import PriorityQueue

q = PriorityQueue()

n = int(input())
lst = map(int,input().split())
res = 0

for x in lst:
    q.put(x)

while q.qsize() > 1:
    a = q.get()
    b = q.get()
    q.put(a + b)
    res += a + b

print(res)