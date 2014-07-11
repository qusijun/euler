#!/usr/bin/env python
# coding=utf-8

##字典序全排列算法
LIMIT = 1000000
def lex(n):
    seed = []
    for i in range(n):
        seed.append(i)
    
    count = 1
    while True:
        #print seed
        count +=1
        j = 0
        m = 0
        indexs = range(1,n)
        indexs.reverse()
        #print indexs
        #从右向左遍历遍历，找到第一个减小的值的索引
        #print seed
        for i in indexs:
            #print seed[i-1],seed[i]
            if seed[i-1]<seed[i]:
                j = i-1
                #print j
                break
        #从右向左遍历，找到第一个比seed[j]大的数的索引
        #indexs = indexs.insert(9,0)
        indexs.append(0)
        #print 'indexs',indexs
        for i in indexs:
            #print seed[i]
            if seed[i]>seed[j]:
                #print i
                m = i
                break
               # print m
        #交换seed[j]和seed[m]
        #print j,m
        #print seed
        seed[j],seed[m] =seed[m],seed[j]
        #print 'seed',seed


        #将seed[j]之后的元素进行reverse
        tmp = seed[j+1:]
        #print 'tmp',tmp
        tmp.reverse()
        #print tmp
        b = seed[:j+1]
        b.extend(tmp)
        seed = b
        
        #print seed
        if count == LIMIT:
            print seed
            break


        


lex(10)
