#!/usr/bin/env python
# coding=utf-8
from math import sqrt
def function_d(n):
    divisors = []
    for i in range(1,int(sqrt(n))+1):
        if n%i ==  0:
            divisors.append(i)
            divisors.append(n/i)
    divisor_sum = 0
    #map(lambda x:divisors +=x,divisors)
    for divisor in divisors:
        #print divisor 
        divisor_sum += divisor
    return divisor_sum - n

print function_d(284)
amicables = []
for i in range(2,10000):
    tmp = function_d(i)
    #print tmp
    if i == function_d(tmp) and tmp < 10000 and i != tmp:
        print i,tmp    
        amicables.append(i)
        amicables.append(tmp)

sum = 0
for amicable in amicables:
    sum +=amicable
    
print sum/2



