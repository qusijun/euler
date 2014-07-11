#!/usr/bin/env python
# coding=utf-8
import math
def is_abundant(n):
    divisors = []
    for i in range(1,int(math.sqrt(n))+1):
        if n%i == 0:
            #print i
            divisors.append(i)
            divisors.append(n/i)
            if n/i==i:
                divisors.remove(i)
            
    sum = 0
    for i in divisors:
        sum+=i
    divisorssum = sum - n
    #print divisorssum
    if divisorssum>n:
        return 1
    else:
        return 0
#print is_abundant(4)

def not_abundant_sum(n):
    for i in range(1,n/2+1):
        if is_abundant(i) and is_abundant(n-i):
            print i,n-i
            return 0
    return 1
#print not_abundant_sum(8)
sum = 0
for i in range(1,28124):
   if not_abundant_sum(i):
       print i
       sum+=i
print sum




