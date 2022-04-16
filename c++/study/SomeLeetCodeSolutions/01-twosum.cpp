//
// Created by Cihat Yildiz on 3/6/22.
//

#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            int n = nums[i];
            int complement = target - n;
            if (visited.count(complement)) {
                return {visited[complement], i};
            }
            visited[n] = i;  // assume that each input would have exactly one solution
        }
        return {};
    }
};

int main()
{
    vector<int> nums = {2, 5, 4, 11, 8};
    Solution s; 
    s.twoSum(nums, 19);
    
}