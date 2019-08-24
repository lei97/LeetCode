#pragma once
#include"config.h"

class removeElement {
public:
    int Solution(vector<int>& nums, int val) {
        int tmp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[tmp] = nums[i];
                tmp++;
            }
        }
        while (tmp < nums.size())
        {
            nums.pop_back();
        }

        return nums.size();
    }
};
