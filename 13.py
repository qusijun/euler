#!/usr/bin/env python
# coding=utf-8
import string

sum = 0
f = open('13.input')
for i in f:
    num = string.atoi(i)
    sum+=num
print sum
