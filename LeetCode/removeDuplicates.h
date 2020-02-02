#pragma once
#include"config.h"

class removeDuplicates
{
public:
    /*
        26. ɾ�����������е��ظ���
        ˵��: ����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
             ��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ�����������
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