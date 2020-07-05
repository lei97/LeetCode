#pragma once
#include "config.h"

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        if (s.size() <= n)
        {
            return s;
        }
        string data = s.substr(n) + s.substr(0, n);
        return data;
    }
};