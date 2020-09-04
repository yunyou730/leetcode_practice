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
	ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        ListNode* dummy = new ListNode(0);
        ListNode* node = dummy;
        while (true)
        {
            ListNode* nextNode = nullptr;
            int index = -1;
            for(int i = 0;i < lists.size();i++)
            {
                ListNode* curNode = lists[i];
                if (curNode != nullptr)
                {
                    if (nextNode == nullptr)
                    {
                        nextNode = curNode;
                        index = i;
                    }
                    else if (curNode->val < nextNode->val)
                    {
                        nextNode = curNode;
                        index = i;
                    }
                }
            }
            //printf("[index]%d", index);
            if (nextNode == nullptr)
            {
                break;
            }
            else
            {
                lists[index] = lists[index]->next;
                node->next = nextNode;
                node = node->next;
            }
        }
        return dummy->next;
	}
};
