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
if not a and b == c * c:
    print('MANY SOLUTIONS')
elif a * x + b == c * c:
    print(x)
else:
    print('NO SOLUTION')