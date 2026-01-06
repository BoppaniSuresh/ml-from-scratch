'''

f(x) = ax^3 + bx^2 + cx + d

f'(x) = 3ax^2 + 2*bx + c

'''

from sympy import symbols, diff, sin, exp

x = symbols('x')

f_x = 3*x**3 + sin(x) + exp(x)

f_prime = diff(f_x,x)

print(f_prime)

point_value = f_prime.evalf(subs={x: 1})

print(point_value)