a = int(input())

b = ""
c =""

while(a > 0):
    if a % 2 == 1:
        b += '1'
    if a % 2 == 0:
        b += '0'
    a //= 2

b = b[::-1]
b = b[1:]
for i in range(len(b)):
    if b[i] == '0':
        c += "S"
    else:
        c += "SX"

print(c)