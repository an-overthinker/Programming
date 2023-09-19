import numpy as np
n=int(input())
l=[]
for _ in range(n):
    temp=list(map(float, input().rstrip().lstrip().split()))
    l.append(temp)
print(round(np.linalg.det(l) , 2))
