import math
import os
import random
import re
import sys

def findPoint(px, py, qx, qy):
    r=[]
    if qx > px:
        r.append(abs(px-qx) + qx)
    else:
        r.append(qx - abs(px-qx))
    if qy > py:
        r.append(abs(py-qy) + qy)
    else:
        r.append(qy - abs(py-qy))
    return r
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    for n_itr in range(n):
        first_multiple_input = input().rstrip().split()

        px = int(first_multiple_input[0])

        py = int(first_multiple_input[1])

        qx = int(first_multiple_input[2])

        qy = int(first_multiple_input[3])

        result = findPoint(px, py, qx, qy)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
