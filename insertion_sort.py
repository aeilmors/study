#!/usr/bin/env python
# -*- coding=utf-8 -*-

test = [34, 12, 5, 89, 100, 65, 43, 11, 0, 5]

def downInsertSort():
    length = len(test)
    for i in range(1, length):
        key = test[i]
        j = 0
        while j < i:
            if key > test[i-j-1]:
                test[i-j] = test[i-j-1]
                j = j + 1
            else:
                break
        test[i-j] = key

if __name__ == '__main__':
    print test
    downInsertSort()
    print test
