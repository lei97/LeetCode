#include"config.h"

//反转字符串
class reverseString {
public:
    void Solution(vector<char>& s) {
        for (int i = 0; i < s.size() / 2; i++)
        {
            char tmp = s[i];
            s[i] = s[s.size() - i- 1];
            s[s.size() - i - 1] = tmp;
        } 
    }
};
