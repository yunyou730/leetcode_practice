#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* slow = head;
        ListNode* fast = head;

        for (int i = 0;i  <  n + 1;i++)
        {
            if (fast == nullptr)
            {
                if (i == n)
                {
                    // length == n
                    ListNode* prevHead = head;
                    head = head->next;
                    prevHead->next = NULL;
                }
                // not  enough length
                return head;
            }
            fast = fast->next;
        }

        while (fast != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }


    void makeList(ListNode** head,int len)
    {
        *head = new ListNode(0);
		for (int i = 1; i < len; i++)
		{
			ListNode* node = *head;
			while (node->next != nullptr)
			{
				node = node->next;
			}
			node->next = new ListNode(i);
		}
    }

    void dump(ListNode* head)
    {
        ListNode* node = head;
        while (node != nullptr)
        {
            printf("%d\n",node->val);
            node = node->next;
        }
    }
};