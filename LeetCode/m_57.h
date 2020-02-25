#pragma once
#include "config.h"

/*
    面试题57. 和为s的两个数字
*/
class Solution {
public:
    /*
        暴力法，超出时间限制
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        if (size <= 1)
        {
            return vector<int> {};
        }
        int left = 0;
        while (left < size && nums[left] < target)
        {
            int right = left + 1;
            while (right < size && nums[right] < target)
            {
                if (target == nums[left] + nums[right])
                {
                    return vector<int> {nums[left], nums[right]};
                }
            }
            left = left + 1;
        }
        return vector<int> {};
    }

    vector<int> twoSum1(vector<int>& nums, int target)
    {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        while (left < right)
        {
            int tmp = nums[left] + nums[right];
            if (target == tmp)
            {
                return vector<int> {nums[left],nums[right]};
            }
            else if (target < tmp)
            {
                right = right - 1;
            }
            else
            {
                left = left + 1;
            }
        }
        return vector<int> {};
    }
};