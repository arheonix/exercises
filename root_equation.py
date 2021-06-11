# ----------------------------------------------------------------
# Решите в целых числах уравнение:
# (ax+b)^0.5=c
# a, b, c – данные целые числа: найдите все решения или сообщите, что решений в целых числах нет.
# ----------------------------------------------------------------


a = int(input())
b = int(input())
c = int(input())

x = (c * c - b) / a
x = int(x)
if a == b == c == 0 and not a and b == c * c:
    print('MANY SOLUTIONS')
elif c < 0:
    print('NO SOLUTION')
elif (a * x + b) ** 0.5 == c:
    print(x)
else:
    print('NO SOLUTION')
