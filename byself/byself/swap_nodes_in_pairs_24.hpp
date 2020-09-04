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
	ListNode* swapPairs(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* dummyHead = head->next;
        ListNode* nodeA = head;
        ListNode* nodeB = head->next;

        while (nodeA != nullptr && nodeB != nullptr)
        {
            ListNode* nextA = nodeB->next;
            ListNode* nextB = (nextA != NULL) ? nextA->next : NULL;

            nodeB->next = nodeA;
            if (nextB != NULL)
            {
                nodeA->next = nextB;
            }
            else
            {
                nodeA->next = nextA;
            }
            nodeA = nextA;
            nodeB = nextB;
        }
        return dummyHead;
	}


    ListNode* makeList(int len)
    {
        if (len == 0)
        {
            return NULL;
        }
        ListNode* head = new ListNode(0);
        ListNode* node = head;
        for(int  i = 0;i <  len -  1;i++)
        {
            node->next = new ListNode(i + 1);
            node = node->next;
        }
        return  head;
    }

    void dump(ListNode* head)
    {
        printf("============\n");
        while (head != nullptr)
        {
            printf("%d\n",head->val);
            head = head->next;
        }
    }
};