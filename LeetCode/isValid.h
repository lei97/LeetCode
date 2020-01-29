#pragma once
#include"config.h"

class IsValid {
public:
    /*
                20. 有效的括号
        描叙：
            
        要求：
            1. 左括号必须用相同类型的右括号闭合。
            2. 左括号必须以正确的顺序闭合。
        题解:
            使用栈完成设置
    */
    bool source(string s)
    {
        std::stack<char> tmp;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            switch (s[i])
            {
            case '{':
            case '(':
            case '[':
                tmp.push(s[i]);
                break;
            case '}':
                if (tmp.size() && tmp.top() == '{')
                {
                    tmp.pop();
                }
                else
                {
                    tmp.push(s[i]);
                }
                break;
            case ']':
                if (tmp.size() && tmp.top() == '[')
                {
                    tmp.pop();
                }
                else
                {
                    tmp.push(s[i]);
                }
                break;
            case ')':
                if (tmp.size() && tmp.top() == '(')
                {
                    tmp.pop();
                }
                else
                {
                    tmp.push(s[i]);
                }
            default:
                break;
            }
        }
        return tmp.size() > 0 ? false : true;
    }

    void test()
    {

    }
};