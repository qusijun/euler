#!/usr/bin/env python
# coding=utf-8
f_read = open('name')
alp_dic = {'A':1,'B':2,'C':3,'D':4,'E':5,'F':6,'G':7,'H':8,'I':9,'J':10,'K':11,'L':12,'M':13,'N':14,'O':15,'P':16,'Q':17,'R':18,'S':19,'T':20,'U':21,'V':22,'W':23,'X':24,'Y':25,'Z':26}
sum = 0
index = 0
for line in f_read:
    line_sum = 0
    index+=1
    for alp in line:
        #print alp
        #index = list(f_read).index(line)
        if alp != '\n':

            line_sum+=alp_dic.get(alp)
    sum+=line_sum * index

print sum
