#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'halloweenParty' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts INTEGER k as parameter.
#

def halloweenParty(k):
    if(k%2==0):
        return int((k/2)**2)
    else:
        return int(((k-1)/2)*(((k+1)/2)))
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        k = int(input().strip())

        result = halloweenParty(k)

        fptr.write(str(result) + '\n')

    fptr.close()
