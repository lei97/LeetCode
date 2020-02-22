#pragma once
#include "config.h"
#include <stack>

class CQueue {
public:
    CQueue() {

    }

    void appendTail(int value) {
        a.push(value);
    }

    int deleteHead() {
        if (a.empty() && b.empty())
        {
            return -1;
        }
        else if (!a.empty() && b.empty())
        {
            while (!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }
        int data = b.top();
        b.pop();
        return data;
    }

    std::stack<int> a;      // a Ϊ����ջ
    std::stack<int> b;      // b Ϊ����ջ
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */