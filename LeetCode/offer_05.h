#pragma once
#include "config.h"

class Solution {
public:
    string replaceSpace(string s) {
        string data = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                data = data + "%20";
            }
            else
            {
                data.push_back(s[i]);
            }
        }
        return data;
    }
};