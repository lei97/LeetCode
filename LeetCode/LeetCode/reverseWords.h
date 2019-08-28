#pragma once
#include"config.h"

class reverseWords {
public:
    string Solution(string s) {
        string tmp;
        string world;
        for (int i = (s.size() - 1); i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                if (tmp.empty())
                {
                    tmp = world;
                }
                else
                {
                    tmp = world + " " + tmp;
                }
                world.clear();
            }
            else
            {
                world.push_back(s[i]);
            }
        } 
        if (tmp.empty())
        {
            tmp = world;
        }
        else
        {
            tmp = world + " " + tmp;
        }
        return tmp;
    }
};