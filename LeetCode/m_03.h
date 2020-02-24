#pragma once
#include "config.h"
#include<algorithm>

/*
        面试题03. 数组中重复的数字
*/
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        vector<int> data{ nums };
        std::sort(data.begin(), data.end());
        int size = data.size();
        int tmp = data[0];
        for (int i = 1; i < size; i++)
        {
            if (tmp == data[i])
            {
                return tmp;
            }
            else
            {
                tmp = data[i];
            }
        }
        return -1;
    }
};