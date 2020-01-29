#pragma once
#include"config.h"

class IsValid {
public:
    /*
                20. ��Ч������
        ����
            
        Ҫ��
            1. �����ű�������ͬ���͵������űպϡ�
            2. �����ű�������ȷ��˳��պϡ�
        ���:
            ʹ��ջ�������
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