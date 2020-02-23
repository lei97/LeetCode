#pragma once
#include "config.h"

/*
        53. 最大子序和
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int data = nums[0];
        int sum = 0;
        for (int num : nums)
        {
            if (sum > 0)
            {
                sum = num + sum;
            }
            else
            {
                sum = num;
            }
            data = sum > data ? sum : data;
        }
        return data;
    }
};