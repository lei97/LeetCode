#pragma once
#include"config.h"

class removeDuplicates
{
public:
    /*
        26. 删除排序数组中的重复项
        说明: 给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
             不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成
    */
    int source(vector<int>& nums)
    {
        int size = nums.size();
        if (size <= 1) 
        {
            return size;
        }

        int data = nums[0];
        int count = 1;
        for (int i = 1; i < size; i++)
        {
            if (data != nums[i])
            {
                data = nums[i];
                nums[count] = data;
                count = count + 1;
            }
        }
        nums.reserve(count);
        return count;
    }
};