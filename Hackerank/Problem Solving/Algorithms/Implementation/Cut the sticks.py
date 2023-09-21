import math
import os
import random
import re
import sys

def cutTheSticks(arr):
    len_arr = len(arr)
    output = [len_arr]
    while len(arr) > 1:
        x = min(arr)
        y = len(arr) - arr.count(x)
        if y > 0:
            output.append(y)
        for i in range(arr.count(x)):
            arr.remove(x)
    return output
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = cutTheSticks(arr)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
