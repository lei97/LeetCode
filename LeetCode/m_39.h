#pragma once
#include "config.h"
#include <algorithm>

/*
        ������39. �����г��ִ�������һ�������
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};