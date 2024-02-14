MAX = 10001

fi = [0] * MAX
ps = [0] * MAX

def fill_euler():
    global fi, ps
    for i in range(2, MAX):
        if fi[i] == 0:
            for j in range(i, MAX, i):
                if fi[j] == 0:
                    fi[j] = j
                fi[j] -= fi[j] // i
    
    ps[0] = 0
    ps[1] = 1
    for i in range(2, MAX):
        ps[i] = ps[i - 1] + fi[i]


fill_euler()
tests = int(input())
for _ in range(tests):
    n = int(input())
    res = ps[n] * ps[n]
    print(res)
