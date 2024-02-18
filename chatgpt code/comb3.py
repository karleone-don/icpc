def find_combination(numbers, k, p):
    n = len(numbers)
    combination = []

    # Создаем битовую маску для чисел
    mask = (1 << k) - 1

    # Смещаем маску влево на (n - k) битов для выравнивания
    mask <<= (n - k)

    # Проходим по всем числам и формируем комбинацию
    for num in numbers:
        if p & mask:
            combination.append(num)
        mask >>= 1
        if not mask:
            break

    return combination

# Пример использования
numbers = [1, 2, 3, 4, 5]
k = 3

for p in range(10):
    result = find_combination(numbers, k, p)
    print("p =", p, "; Комбинация:", result)

#хуйня полная

