#pragma once
#include "config.h" 

class searchInsert {
    /*
           35. 搜索插入位置 
    说明： 
         给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
         如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
    */

    /*
    解法1：遍历法
    */
    int source(vector<int>& nums, int target) {
        unsigned int size = nums.size();
        if (size == 0)
        {
            nums.push_back(target);
            return 0;
        }

        int postion = 0;
        while ( postion < size && nums[postion] < target )
        {
            postion++;
        }        
        if (postion == size)
        {
            nums.push_back(target);
            return postion;
        }

        if (nums[postion] == target)
        {
            return postion;
        }
        
        nums.push_back(nums[size - 1]);
        int right = size - 1;   // 数组增加一个数据，size 增加，只需要 size-1
        int left = postion;
        while (left < right)
        {
            nums[right] = nums[right - 1];
            right--;
        }
        nums[left] = target;
        return postion;
    }
};