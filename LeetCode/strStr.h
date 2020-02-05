#pragma once
#include "config.h"

class strStr {
public:
    /*
                28.实现 strStr() 函数。
    说明：
         给定一个 haystack 字符串和一个 needle 字符串，
         在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1
    */
    /*

    */
    int source(string haystack, string needle) {
        int need_size = needle.size();
        int haystack_size = haystack.size();
        if (0 == need_size)
        {
            return 0;
        }
        if (haystack_size < need_size)
        {
            return -1;
        }
        int left = 0;
        while (left < haystack_size)
        {
            if(haystack[left] == needle[0])
            {
                int i = left;
                int j = 0;
                while (haystack[i] == needle[j] && i < haystack_size && j < need_size)
                {
                    i = i + 1;
                    j = j + 1;
                }
                if (j == need_size)
                {
                    return left;
                }
            }
            left = left + 1;
        }
        return -1;
    }
};