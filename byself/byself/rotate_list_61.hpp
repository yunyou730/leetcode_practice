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
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}

		int len = 0;
		ListNode* node = head;
		while (node != nullptr)
		{
			node = node->next;
			len++;
		}
		k = k % len;

		for (int i = 0;i < k;i++)
		{
			ListNode* slow = head;
			ListNode* fast = slow->next;
			while (fast->next != nullptr)
			{
				fast = fast->next;
				slow = slow->next;
			}
			slow->next = nullptr;
			fast->next = head;
			head = fast;
		}

		return head;
	}
};