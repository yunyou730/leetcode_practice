#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>

using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
	{
		if (headA == nullptr || headB == nullptr)
		{
			return nullptr;
		}


		ListNode* pa = headA;
		ListNode* pb = headB;

		bool hasAChanged = false;
		bool hasBChanged = false;

		bool hasAReachEnd = false;
		bool hasBReachEnd = false;

		ListNode* inter = nullptr;

		while (!hasAReachEnd || !hasBReachEnd)
		{

			if (pa == pb)
			{
				inter = pa;
				break;
			}

			if (pa->next != nullptr)
			{
				pa = pa->next;
			}
			else if(!hasAChanged)
			{
				hasAChanged = true;
				pa = headB;
			}
			else
			{
				hasAReachEnd = true;
			}

			if (pb->next != nullptr)
			{
				pb = pb->next;
			}
			else if (!hasBChanged)
			{
				hasBChanged = true;
				pb = headA;
			}
			else
			{
				hasBReachEnd = true;
			}
		}

		return inter;
	}
};
