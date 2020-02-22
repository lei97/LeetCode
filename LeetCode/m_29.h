#pragma once
#include"config.h"


/*
        面试题29. 顺时针打印矩阵
    输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int size_j = matrix.size();
        if (size_j == 0)
        {
            return vector<int> {};
        }
        int size_i = matrix[0].size();
        vector<int> data{};
        int pos_i = 0;
        int pos_j = 0;
        while ((size_j > pos_j) && (size_i > pos_i))
        {
            if ((size_j - pos_j) == 1)
            {
                for (int i = pos_i; i < size_i; i++)
                {
                    data.push_back(matrix[pos_j][i]);
                }
                break;
            }
            if ((size_i - pos_i) == 1)
            {
                for (int j = pos_j; j < size_j; j++)
                {
                    data.push_back(matrix[j][pos_i]);
                }
                break;
            }
            int i = pos_i;
            int j = pos_j;
            for (; i < size_i - 1; i++)
            {
                data.push_back(matrix[j][i]);
            }
            for (; j < size_j - 1; j++)
            {
                data.push_back(matrix[j][i]);
            }
            for (; i > pos_i; i--)
            {
                data.push_back(matrix[j][i]);
            }
            for (; j > pos_j; j--)
            {
                data.push_back(matrix[j][i]);
            }
            size_i--;
            size_j--;
            pos_i++;
            pos_j++;
        }
        return data;
    }
};