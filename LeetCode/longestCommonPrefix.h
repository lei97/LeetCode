#pragma once
#include "config.h"

class longestCommonPrefix {
public:
    /*
                14. 最长公共前缀
        描叙：
            编写一个函数来查找字符串数组中的最长公共前缀。
            如果不存在公共前缀，返回空字符串。
        题解：
            1. 暴力法
    */
    string source(vector<string>& strs)
    {
        int size = strs.size();
        if (size == 0)
        {
            return "";
        }
        int min = strs[0].size();
        for (int i = 0; i < size; i++)
        {
            if (min < strs[i].size())
            {
                min = strs[i].size();
            }
        }
        string data{""};
        for (int i = 0; i < min; i++)
        {
            char tmp = strs[0][i];
            for (int j = 0; j < size; j++)
            {
                if (tmp != strs[j][i])
                {
                    return data;
                }
            }
            data.push_back(tmp);
        }
        return data;
    }
};