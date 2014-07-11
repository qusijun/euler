#!/usr/bin/env python
# coding=utf-8
mul =1
for i in range(1,101):
    mul *= i

sum = 0 
for digit in str(mul):
    sum += int(digit)

print sum
