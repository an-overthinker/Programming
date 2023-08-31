import math
import os
import random
import re
import sys

def organizingContainers(container):
    # Write your code here
    hsum=[]
    vsum=[]
    for i in range(len(container[0])):
        hsum.append(sum(container[i]))
    for i in range(len(container[0])):
        s=0
        for j in range(len(container[0])):
            s+=container[j][i]
        vsum.append(s)
    print(hsum,vsum)
    for i in hsum:
        if i in vsum:
            vsum.remove(i)
    if vsum==[]:
        return "Possible"
    else:
        return "Impossible"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        container = []

        for _ in range(n):
            container.append(list(map(int, input().rstrip().split())))

        result = organizingContainers(container)

        fptr.write(result + '\n')

    fptr.close()
