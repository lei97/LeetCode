#pragma once
#include"config.h"
#include <stack>

using std::stack;

/*
        155. 最小栈
    设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。
    push(x) -- 将元素 x 推入栈中。
    pop() -- 删除栈顶的元素。
    top() -- 获取栈顶元素。
    getMin() -- 检索栈中的最小元素。
*/
class MinStack {
public:
    MinStack() {

    }

    void push(int x) {
        data.push(x);
        if (mindata.empty())
        {
            mindata.push(x);
            return;
        }

        if (mindata.top() >= x)
        {
            mindata.push(x);
        }

    }

    void pop() {
        if (data.top() == mindata.top())
            mindata.pop();
        data.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return mindata.top();
    }

    stack<int> data;
    stack<int> mindata;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */