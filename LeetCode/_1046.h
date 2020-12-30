#pragma once
#include "config.h"

#include<algorithm>

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        auto data = stones;
        int len = data.size() - 1;
        if (len == 0)
        {
            return data[0];
        }
        if (len == 1)
        {
            return abs(data[1] - data[0]);
        }
        
        sort(data.begin(), data.end());
        
        for (int tmp = len; tmp > 0; tmp--)
        {
            data[len] = data[len] - data[len - 1];
            data[len - 1] = 0;
            sort(data.begin(), data.end());
        }

        return data[len];
    }
};