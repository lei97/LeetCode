#pragma once
#include "config.h"
#include <algorithm>

/*
        面试题39. 数组中出现次数超过一半的数字
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};