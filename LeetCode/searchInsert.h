#pragma once
#include "config.h" 

class searchInsert {
    /*
           35. ��������λ�� 
    ˵���� 
         ����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
         ���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
    */

    /*
    �ⷨ1��������
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
        int right = size - 1;   // ��������һ�����ݣ�size ���ӣ�ֻ��Ҫ size-1
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