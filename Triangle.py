# ---------------------------------------------------------
# Даны три натуральных числа. Возможно ли построить треугольник с такими сторонами.
# Если это возможно, выведите строку YES, иначе выведите строку NO.
# Треугольник — это три точки, не лежащие на одной прямой.
# --------------------------------------------------------

a = int(input())
b = int(input())
c = int(input())
if c == 0:
    print('NO')
elif (a + b) > c:
    print('YES')
else:
    print('NO')