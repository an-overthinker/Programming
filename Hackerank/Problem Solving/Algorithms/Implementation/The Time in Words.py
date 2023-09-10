#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeInWords' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER h
#  2. INTEGER m
#

def timeInWords(h, m):
    time = ["zero", "one", "two", "three", "four",
            "five", "six", "seven", "eight", "nine",
            "ten", "eleven", "twelve", "thirteen",
            "fourteen", "quarter", "sixteen", 
            "seventeen", "eighteen", "nineteen", 
            "twenty", "twenty one", "twenty two", 
            "twenty three", "twenty four", 
            "twenty five", "twenty six", "twenty seven",
            "twenty eight", "twenty nine","half"];
            
    if  m == 0 :
        return f"{time[h]} o' clock"
    
    elif m in range(1,10) :
        return f"{time[m]} minute past {time[h]}"
    
    elif m in range(10,31) :
        if m == 15:
            return f"{time[m]} past {time[h]}"
        elif m == 30:
            return f"{time[m]} past {time[h]}"
        return f"{time[m]} minutes past {time[h]}"
    
    else :
        if m == 45:
            return f"{time[60-m]} to {time[h+1]}"
        return f"{time[60-m]} minutes to {time[h+1]}"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = int(input().strip())

    m = int(input().strip())

    result = timeInWords(h, m)

    fptr.write(result + '\n')

    fptr.close()
