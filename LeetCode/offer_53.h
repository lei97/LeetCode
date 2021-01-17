#pragma once
#include "config.h"

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //int count = 0;
        //int right = nums.size() - 1;
        //int left = 0;
        //int middle = (right - left) / 2;
        //while (left < right && nums[left] <= target && target <= nums[right])
        //{
        //    if (nums[left] == target || nums[right]== target || nums[middle] == target)
        //    {
        //        count++;
        //        int data = 0;
        //        if (nums[left] == target)
        //        {
        //            data = left;
        //        }
        //        else if (nums[right] == target)
        //        {
        //            data = right;
        //        }
        //        else
        //        {
        //            data = middle;
        //        }
        //        int tmp = data - 1;
        //        while ((tmp >= 0) && (nums[tmp] == target))
        //        {
        //            count++;
        //            tmp--;
        //        }
        //        tmp = data + 1;
        //        while ((tmp < (nums.size() - 1)) && (nums[tmp] == target))
        //        {
        //            count++;
        //            tmp++;
        //        }
        //        return count;
        //    }

        //    if (nums[middle] > target)
        //    {
        //        right = middle - 1;
        //        middle = left + (right - left) / 2;
        //    }
        //    else
        //    {
        //        left = middle + 1;
        //        middle = (right + left) / 2;
        //    }
        //}
        //return count;

        if (nums.size() == 0) {
            return 0;
        }

        int left = 0, right = nums.size() - 1;
        int count = 0;

        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] >= target) 
            {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        for (int i = left; i < nums.size(); ++i) {
            if (nums[i] == target) {
                ++count;
            }
        }

        return count;

    }
};