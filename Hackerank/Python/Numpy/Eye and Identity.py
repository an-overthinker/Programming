import numpy as np
np.set_printoptions(legacy='1.13')
first_input_line=input().strip().split()
n=int(first_input_line[0])
m=int(first_input_line[1])
print(np.eye(n,m))