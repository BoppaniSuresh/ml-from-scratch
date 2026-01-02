'''

Task:  Write a program that takes two vectors of equal length

Computes: Element-wise sum, Element wise difference, Dot product

'''

import numpy as np 

v1 = np.array(list(map(float, input("Enter vector 1: ").split())))

v2 = np.array(list(map(float, input("Enter vector 2: ").split())))

if len(v1)!= len(v2):
    print("length of two vectors should be same, Please check ")

summ = v1 + v2
diff = v1 - v2
dp = np.dot(v1, v2)

print("Element-wise Sum:", summ)
print("Element-wise Difference:", diff)
print("Dot Product:", dp)

