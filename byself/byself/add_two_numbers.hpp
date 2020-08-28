#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>

using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        ListNode* dummy = new ListNode();
        ListNode* cur = dummy;
        while (true)
        {
            if (l1 == NULL && l2 == NULL && carry == 0)
            {
                break;
            }

            int sum = 0;
            if (l1 != nullptr)
                sum += l1->val;
            if (l2 != nullptr)
                sum += l2->val;
            sum += carry;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            cur = cur->next;

            if(l1 != nullptr)   
                l1 = l1->next;
            if (l2 != nullptr)   
                l2 = l2->next;
        }
        return dummy->next;
    }
};
