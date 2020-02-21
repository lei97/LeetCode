#pragma once
#include "config.h"
#include <stack>

class CQueue {
public:
    CQueue() {

    }


    /*
    ["CQueue","deleteHead","appendTail","deleteHead","deleteHead","deleteHead","deleteHead","appendTail","deleteHead","appendTail","appendTail","deleteHead","deleteHead","deleteHead","appendTail","deleteHead","deleteHead","deleteHead","deleteHead","appendTail","appendTail","appendTail","appendTail","deleteHead","deleteHead","appendTail","appendTail","deleteHead","deleteHead","deleteHead","appendTail","appendTail","deleteHead","appendTail","deleteHead","appendTail","appendTail","appendTail","deleteHead","deleteHead","appendTail","appendTail","deleteHead","deleteHead","deleteHead","deleteHead","appendTail","appendTail","deleteHead","deleteHead","appendTail","deleteHead","appendTail","appendTail","appendTail","appendTail","deleteHead","appendTail","deleteHead","deleteHead","appendTail","appendTail","appendTail","deleteHead","deleteHead","appendTail","appendTail","appendTail","deleteHead","deleteHead","deleteHead","deleteHead","appendTail","appendTail","deleteHead","deleteHead","appendTail","deleteHead","appendTail","appendTail","deleteHead","deleteHead","appendTail","deleteHead","appendTail","appendTail","appendTail","deleteHead","appendTail","appendTail","appendTail","appendTail","deleteHead","deleteHead","deleteHead","appendTail","deleteHead","appendTail","deleteHead","appendTail","appendTail"]
    [[],[],[97],[],[],[],[],[15],[],[1],[43],[],[],[],[18],[],[],[],[],[36],[69],[21],[91],[],[],[22],[40],[],[],[],[81],[65],[],[77],[],[63],[96],[5],[],[],[35],[90],[],[],[],[],[77],[83],[],[],[52],[],[2],[66],[87],[90],[],[2],[],[],[33],[16],[72],[],[],[14],[78],[8],[],[],[],[],[3],[83],[],[],[13],[],[79],[44],[],[],[33],[],[55],[76],[12],[],[91],[24],[49],[47],[],[],[],[85],[],[69],[],[94],[52]]
    */
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

    std::stack<int> a;      // a 为数据栈
    std::stack<int> b;      // b 为辅助栈
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */