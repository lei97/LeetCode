#pragma once
#include "config.h"

class merge {
    /*
        88.合并两个有序数组
        说明：
            初始化 num1 和 num2 的元素分别为 m 和 n
            可以假设 nums1 有足够的空间 （ m + n ） 保存 nums2 
    */
    void source(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp{ nums1 };
        int cnt1 = 0;
        int cnt2 = 0;
        int i = 0;
        while((cnt1 < m) && (cnt2 < n))
        {
            if (tmp[cnt1] > nums2[cnt2])
            {
                nums1[i] = nums2[cnt2];
                cnt2++;
            }
            else
            {
                nums1[i] = tmp[cnt1];
                cnt1++;
            }
            i++;
        }

        while (cnt1 < m)
        {
            nums1[i] = tmp[cnt1];
            i = i + 1;
            cnt1 = cnt1 + 1;
        }
        while (cnt2 < n)
        {
            nums1[i] = nums2[cnt2];
            i = i + 1;
            cnt2 = cnt2 + 1;
        }
    }
};