#pragma once
#include "config.h"
#include <algorithm>


class Solution {
public:
    int minArray(vector<int>& numbers) {
        // �ⷨ1������ֱ�ӷ�����Сֵ
        //std::sort(numbers.begin(), numbers.end());
        //return numbers[0];

        // �ⷨ2��
        int low = 0;
        int high = numbers.size() - 1;
        while (low < high) {
            int pivot = low + (high - low) / 2;
            if (numbers[pivot] < numbers[high]) 
            {
                high = pivot;
            }
            else if (numbers[pivot] > numbers[high]) 
            {
                low = pivot + 1;
            }
            else 
            {
                high -= 1;
            }
        }
        return numbers[low];
    }
};