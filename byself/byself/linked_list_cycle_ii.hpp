#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>

using namespace std;

/*
@miao @todo
快慢指针的方法 只能 很快 的判断是不是 包含 环  
 但是现在找到 环路的入口还有问题  ,待重写 
*/
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL || head->next == nullptr)
        {
            return nullptr;
        }

        if (head->next->next == head)
        {
            return head;
        }

        ListNode* pa = head;
        ListNode* pb = head->next;

        ListNode* pMeet = nullptr;
        while (pb != nullptr)
        {
			if (pa == pb)
			{
                pMeet = pa;
				break;
			}
            if (pb->next == nullptr || pb->next->next == nullptr)
            {
                break;
            }
            pb = pb->next->next;
            pa = pa->next;
        }

        ListNode* inter = nullptr;
        if (pMeet != nullptr)
        {
            pa = head;
            pb = pMeet;

            while (pb != pa)
            {
                pa = pa->next;
                pb = pb->next->next;
            }
            inter = pa;
        }
        return inter;
    }
};