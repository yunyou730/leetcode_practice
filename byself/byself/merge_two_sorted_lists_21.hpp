#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* p1 = l1;
        ListNode* p2 = l2;

        ListNode* dummy = new ListNode(0);
        ListNode* node = dummy;
        while (true)
        {
            ListNode* nextNode = NULL;
            if (p1 != nullptr && p2 != nullptr)
            {
                if (p1->val < p2->val)
                {
                    nextNode = p1;
                    p1 = p1->next;
                }
                else
                {
                    nextNode = p2;
                    p2 = p2->next;
                }
            }
            else if (p1 == nullptr && p2 != nullptr)
            {
                nextNode = p2;
                p2 = p2->next;
            }
            else if (p2 == nullptr && p1 != nullptr)
            {
				nextNode = p1;
                p1 = p1->next;
            }
            if (nextNode != nullptr)
            {
				node->next = nextNode;
				node = node->next;
            }
            else
            {
                break;
            }
        }
        return dummy->next;
	}
};
