#pragma once
#ifndef CONFIG_H
#define CONFIG_H

#include<iostream>
#include<vector>
#include<string>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

using std::cout;
using std::vector;
using std::string;
#endif