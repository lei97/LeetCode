#pragma once
#include "config.h"

/*
    ������17. ��ӡ��1������nλ��
    ˵��: 
        �������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3��
        ���ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
*/

class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> data;
        auto max = pow(10, n);
        for (int i = 1; i < max; i++)
        {
            data.push_back(i);
        }
        return data;
    }
};