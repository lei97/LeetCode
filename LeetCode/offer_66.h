#pragma once
#include "config.h"

class Solution {
public:
    vector<int> constructArr(vector<int>& a) 
    {
        int tmp = 1, n = a.size();
        vector<int> ans;
        ans.resize(n, 1);
        for (int i = 0; i < n - 1; ++i)
            ans[i + 1] = tmp *= a[i];

        tmp = 1;
        for (int i = n - 2; i >= 0; --i)
            ans[i] *= tmp *= a[i + 1];
        return ans;
    }
};