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
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* reverseList(ListNode* head) {

		if (head == NULL)
		{
			return nullptr;
		}
		if (head->next == nullptr)
		{
			return head;
		}

		ListNode* p1 = head;
		ListNode* p2 = head->next;

		while (true)
		{
			ListNode* temp = p2->next;
			p2->next = p1;
			if (temp == nullptr)
			{
				break;
			}
			p1 = p2;
			p2 = temp;
		}
		head->next = nullptr;
		return p2;
	}
};