# ----------------------------------------------------------------
# Решите в целых числах уравнение:
# (ax+b)^0.5=c
# a, b, c – данные целые числа: найдите все решения или сообщите, что решений в целых числах нет.
# ----------------------------------------------------------------


a = int(input())
b = int(input())
c = int(input())

if a == 0:
    if b != 0:
        print(-c / b)
    if b == 0 & c == 0:
        print('MANY SOLUTIONS')
else:
    D = b ** 2 - 4 * a * c
    if D == 0:
        x1 = -b / (2 * a)
        print(int(x1))
    elif D > 0:
        x1 = (-b - D ** 0.5) / (2 * a)
        x2 = (-b - D ** 0.5) / (2 * a)
        if x1 < x2:
            print( int(x1), int(x2))
        else:
            print( int(x2), int(x1))
    elif D < 0:
        print('NO SOLUTIONS')