#pragma once
#include"config.h"
#include<algorithm>

class MajorityElement {
public:
    /*
        题目：
            给定一个大小为 n 的数组，找到其中的多数元素。
        假定：
            你可以假设数组是非空的，并且给定的数组总是存在多数元素。
        要求：
            多数元素是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
        题解：
            TODO：1. 摩尔投票法 
            TODO：2. 排序法，输出 n/2 位置的数据
    */
    int majorityElement(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }

    /*
        实例：
            [3, 2, 3] -> 3
        实例：
            [2, 2, 1, 1, 1, 2, 2] -> 2
    */
    void test()
    {

    }
};