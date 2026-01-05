'''
Docstring for Journey.Level_0_fundamentals.matrix_ops

Task: Implement a matrix class with multiplication and transpose.

* matrix multiplication
* transpose
* scalar multiply

'''

r, c = map(int, input().split())
c2, p = map(int, input().split())

if c != c2:
    raise ValueError("Invalid matrix dimensions")

mat1 = []
for _ in range(r):
    mat1.append(list(map(float, input().split())))

mat2 = []
for _ in range(c):
    mat2.append(list(map(float, input().split())))

s = float(input())

mat_mul = [[0.0] * p for _ in range(r)]
for i in range(r):
    for k in range(c):
        aik = mat1[i][k]
        for j in range(p):
            mat_mul[i][j] += aik * mat2[k][j]

transpose1 = []
for j in range(c):
    row = []
    for i in range(r):
        row.append(mat1[i][j])
    transpose1.append(row)

scalar1 = []
for i in range(r):
    row = []
    for j in range(c):
        row.append(mat1[i][j] * s)
    scalar1.append(row)

for row in mat_mul:
    print(*row)

for row in transpose1:
    print(*row)

for row in scalar1:
    print(*row)
