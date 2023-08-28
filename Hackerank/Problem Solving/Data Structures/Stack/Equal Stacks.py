import math
import os
import random
import re
import sys

def equalStacks(h1, h2, h3):
    s1 = []
    s2 = []
    s3 = []
    sum1 = 0
    sum2 = 0
    sum3 = 0

    for i in range(len(h1) - 1, -1, -1):
        s1.append(h1[i])
        sum1 += h1[i]

    for i in range(len(h2) - 1, -1, -1):
        s2.append(h2[i])
        sum2 += h2[i]

    for i in range(len(h3) - 1, -1, -1):
        s3.append(h3[i])
        sum3 += h3[i]

    min_val = float('-inf')
    while sum1 != sum2 or sum2 != sum3:
        min_val = min(sum1, min(sum2, sum3))
        if sum1 > min_val:
            sum1 -= s1.pop()
        if sum2 > min_val:
            sum2 -= s2.pop()
        if sum3 > min_val:
            sum3 -= s3.pop()

    return sum1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n1 = int(first_multiple_input[0])

    n2 = int(first_multiple_input[1])

    n3 = int(first_multiple_input[2])

    h1 = list(map(int, input().rstrip().split()))

    h2 = list(map(int, input().rstrip().split()))

    h3 = list(map(int, input().rstrip().split()))

    result = equalStacks(h1, h2, h3)

    fptr.write(str(result) + '\n')

    fptr.close()
