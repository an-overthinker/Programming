import numpy as np
l=list(map(int, input().rstrip().lstrip().split()))
a=np.array(l)
b=a.reshape(3,3)
print(b)