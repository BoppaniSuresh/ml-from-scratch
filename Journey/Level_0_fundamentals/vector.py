'''

Task:  Write a program that takes two vectors of equal length

Computes: Element-wise sum, Element wise difference, Dot product, L2 Norm


The L2 norm, or Euclidean norm, measures a vector's length (magnitude) as the straight-line distance from the origin, calculated by squaring each component, summing them up, and taking the square root.


'''

import numpy as np 

import math

v1 = np.array(list(map(float, input("Enter vector 1: ").split())))

v2 = np.array(list(map(float, input("Enter vector 2: ").split())))

if len(v1)!= len(v2):
    print("length of two vectors should be same, Please check ")
    exit()


summ = v1 + v2
diff = v1 - v2
dp = np.dot(v1, v2)

l2_norm_v1 = 0
for ele in v1:
    l2_norm_v1 = l2_norm_v1 + ele * ele
l2_norm_v1 = math.sqrt(l2_norm_v1)

l2_norm_v2 = 0
for ele in v2:
    l2_norm_v2 = l2_norm_v2 + ele * ele
l2_norm_v2 = math.sqrt(l2_norm_v2)


cosine_similarity_v1_v2 = 0

if l2_norm_v2 == 0 or l2_norm_v1 == 0 :
    cosine_similarity_v1_v2 = 0
else:  
    cosine_similarity_v1_v2 = dp/(l2_norm_v1 * l2_norm_v2)

print("Element-wise Sum:", summ)
print("Element-wise Difference:", diff)
print("Dot Product:", dp)
print("L2 norm of vector 1 is : ", l2_norm_v1)
print("L2 norm of vector 2 is : ", l2_norm_v2)
print("Cosine Similarity between vectors V1 and V2 is : ", cosine_similarity_v1_v2)

