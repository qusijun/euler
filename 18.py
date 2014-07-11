#!/usr/bin/env python
# coding=utf-8

def max(a,b):
    if a>b:
        return a
    else:
        return b

f = open('18.input')
matrix = []                              
for l in f:
    
    matrix.append(map(int,l.split(' ')))
a = range(14)
a.reverse()

for i in a:
    row = matrix[i]
    next_row = matrix[i+1]
    row_len = len(row)
    for j in range(row_len):
        row[j] += max(next_row[j],next_row[j+1])

print matrix[0]


        
