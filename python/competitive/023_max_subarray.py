'''
Intuition

The problem to find maximum (or minimum) element (or sum) with a single array as the input is a good candidate to be solved by the greedy approach in linear time. One can find the examples of linear time greedy solutions in our articles of
Super Washing Machines, and Gas Problem.

Pick the locally optimal move at each step, and that will lead to the globally optimal solution.

The algorithm is general and straightforward: iterate over the array and update at each step the standard set for such problems:

current element

current local maximum sum (at this given point)

global maximum sum seen so far.
'''

class Solution:
    def maxSubArray(self, nums: 'List[int]') -> 'int':
        n = len(nums)
        curr_sum = max_sum = nums[0]

        for i in range(1, n):
            curr_sum = max(nums[i], curr_sum + nums[i])
            max_sum = max(max_sum, curr_sum)
            
        return max_sum