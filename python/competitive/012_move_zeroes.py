#!/usr/local/bin/python3
'''
Given an array nums, write a function to move all 0's to the end of it while 
maintaining the relative order of the non-zero elements.
'''

def move_zeros1(data_array):

    ret_val = []
    zerocount = 0
    for x in range(0, len(data_array)):
        if data_array[x] != 0 :
            ret_val.append(data_array[x])
        else:
            zerocount += 1
    for z in range(0, zerocount):
        ret_val.append(0)
    print(ret_val)

    return ret_val

arr1 = [0,1,0,3,12]
move_zeros1(arr1)

