#!/usr/bin/env python
# coding=utf-8
sum = 0
pow = 2**1000
digits = str(pow)
for digit in digits:
    sum+=int(digit)
print sum
