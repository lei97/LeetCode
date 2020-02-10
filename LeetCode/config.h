#pragma once
#ifndef CONFIG_H
#define CONFIG_H

#include<iostream>
#include<vector>
#include<string>
#include<cassert>
#include<stack>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

using std::cout;
using std::vector;
using std::string;
#endif