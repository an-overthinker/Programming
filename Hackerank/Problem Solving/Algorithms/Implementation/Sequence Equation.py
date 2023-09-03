import math
import os
import random
import re
import sys

def permutationEquation(p):
    a = []
    for i in range(len(p)):
        a.append(p.index(p.index(i+1)+1)+1)
    return a

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = list(map(int, input().rstrip().split()))

    result = permutationEquation(p)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
