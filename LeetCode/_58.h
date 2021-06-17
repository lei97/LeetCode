#pragma once
#include <string>

using std::string;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == " ") {
            return 0;
        }

        int length = 0;
        int position = s.size() - 1;

        while (position >= 0)
        {
            if (s[position] == ' ' && length != 0) {
                return length;
            }
            else if (s[position] != ' ') {
                length++;
            }
            position--;
        }

        return length;
    }
};