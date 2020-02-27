#pragma once
#include "config.h"

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int data = 0;
        while (n)
        {
            if (n & 0x01)
            {
                data = data + 1;
            }
            n = n >> 1;
        }
        return data;
    }
};