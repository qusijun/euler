#!/usr/bin/env python
# coding=utf-8
def is_1000_digits(n):
    if len(str(n))==1000:
        return True
    return False


a,b = 1,1
count = 2
while True:
    c = a+b
    count +=1
    a,b = b,c
    if is_1000_digits(c):
        print count
        break

