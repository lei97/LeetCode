#pragma once

#include"config.h"

class addBinary {
    /*
                67. 二进制求和
    说明：
         给定两个二进制字符串，返回他们的和（用二进制表示）。
         输入为非空字符串且只包含数字 1 和 0。
    */
    /*
        输入: a = "11", b = "1"
        输出: "100"
    */
    string source(string a, string b) {
        int flag = 0; 
        int a_position = a.size() - 1;
        int b_position = b.size() - 1;
        if (a_position < 0 && b_position < 0)
        {
            return "0";
        }
        string s;
        while (a_position >= 0 && b_position >= 0)
        {
            int tmp = flag;
            tmp += a[a_position--] - '0';
            tmp += b[b_position--] - '0';
            if (tmp >= 2)
            {
                flag = 1;
                s = char((tmp - 2) + '0') + s;
            }
            else
            {
                flag = 0;
                s = char((tmp) + '0') + s; 
            }
        }
        while (a_position >= 0)
        {
            int tmp = flag;
            tmp += a[a_position--] - '0';
            if (tmp >= 2)
            {
                flag = 1;
                s = char((tmp - 2) + '0') + s;
            }
            else
            {
                flag = 0;
                s = char((tmp)+'0') + s;
            }
        }
        while (b_position >= 0)
        {
            int tmp = flag;
            tmp += b[b_position--] - '0';
            if (tmp >= 2)
            {
                flag = 1;
                s = char((tmp - 2) + '0') + s;
            }
            else
            {
                flag = 0;
                s = char((tmp)+'0') + s;
            }
        }
        if (flag)
        {
            s = char((flag)+'0') + s;
        }
        return s;
    }
};