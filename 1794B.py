# -*- coding: utf-8 -*-
"""
Created on Sun Mar  5 11:12:44 2023

@author: Mars_Coder
"""

t = int(input())
for i in range(t):
    n = int(input())
    li = list(map(int, input().split()))
    for j in range(n):
        if li[j] == 1:
            li[j] += 1
    for j in range(1, n):
        if li[j] % li[j - 1] == 0:
            li[j] += 1
    for j in range(n):
        print(li[j], end = " ")
    print("");