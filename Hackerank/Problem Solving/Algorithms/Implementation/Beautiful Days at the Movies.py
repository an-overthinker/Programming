import math
import os
import random
import re
import sys

def reverse(n):
    rev=0
    while(n!=0):
        d=n%10
        rev=rev*10+d
        n=int(n/10)
    return rev
    
def beautifulDays(i, j, k):
    counter=0
    for c in range(i,j+1):
        if((abs(c-reverse(c)))%k == 0):
            counter=counter+1
    return counter

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    i = int(first_multiple_input[0])

    j = int(first_multiple_input[1])

    k = int(first_multiple_input[2])

    result = beautifulDays(i, j, k)

    fptr.write(str(result) + '\n')

    fptr.close()
