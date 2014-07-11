#!/usr/bin/env python
# coding=utf-8
def is_prime(n):
    i = 2
    while i<=n/2:
        if n%i == 0:
            return 0
        i += 1
    return 1

def formula(a,b,n):
    return n*n + a*n + b

al = range(-999,1000)
bl = range(-999,1000)


#a = -79
#b = 1601
#n = 0 
#while is_prime(formula(a,b,n)):
#    n+=1
#print n-1

n = 0
n_max = 0
a_max = -10000
b_max = -10000
for a in al:
    for b in bl:
        n = 0
        while is_prime(formula(a,b,n)):
            n+=1
        print 'a = %s,b = %s,n = %s'%(a,b,n)
        if n_max < n:
            n_max = n
            a_max = a
            b_max = b

print n_max,a_max,b_max

