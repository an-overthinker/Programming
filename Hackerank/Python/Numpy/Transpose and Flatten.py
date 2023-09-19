import numpy as np
first_line=input().lstrip().rstrip().split()
n=int(first_line[0])
l=[]
for _ in range(n):
    temp=list(map(int, input().rstrip().lstrip().split()))
    l.append(temp)
arr=np.array(l)
print(np.transpose(arr),"\n",arr.flatten(),sep='')
