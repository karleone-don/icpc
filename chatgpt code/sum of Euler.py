def euler_phi_sum(n):
    phi = [i for i in range(n+1)]
    for p in range(2, n+1):
        if phi[p] == p:
            for j in range(p, n+1, p):
                phi[j] -= phi[j] // p
    return sum(phi)

n = int(input("Введите n: "))
print("Сумма значений функции Эйлера до", n, ":", euler_phi_sum(n))
