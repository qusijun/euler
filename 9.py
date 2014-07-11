#!/usr/bin/env python
# coding=utf-8

SUM = 1000

for i in range(SUM):
    for j in range(SUM-i):
        k = SUM-i-j
        if i**2 + j**2 == k**2:
            print i*j*k

