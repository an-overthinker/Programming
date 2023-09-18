#!/bin/python3

import math
import os
import random
import re
import sys

def SumOfDigits(num):
    sum=0
    while(num!=0):
        d=num%10
        sum=sum+d
        num=int(num/10)
    return sum

def BetterDivisor(n):
    
    divisors=[]
    
    if(n==1 or n==2 or n==3):
        divisors.append(n)
        
    else:
        for i in range(1,math.ceil(n/2)+1):
            if(n%i==0):
                divisors.append(i)
        divisors.append(n)
        
    #print(divisors)
    best,last_best,maxim=divisors[0],divisors[0],0
    
    for i in divisors:
        if(SumOfDigits(i)>maxim):
            maxim=SumOfDigits(i)
            last_best=best
            best=i
            
        elif(SumOfDigits(i)==maxim):
            if(i<best):
                last_best,best=best,i
                
        #print("No.: ",i,"SumOfDigits: ",SumOfDigits(i),"CurrentMaximum: ",maxim)
        #print("last best: ",last_best,"best: ",best)
                
    print(best)
    
if __name__ == '__main__':
    n = int(input().strip())
    BetterDivisor(n)