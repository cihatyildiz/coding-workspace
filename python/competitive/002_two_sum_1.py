'''
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
'''

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ret_val = []
        
        for x in range(0, len(nums)):
            for y in range(x+1, len(nums)):
                if nums[x] + nums[y] == target:
                    #ret_val.append([nums[x], nums[y]])
                    ret_val.append(x)
                    ret_val.append(y)
                    
        return ret_val