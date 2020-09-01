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
	int getDecimalValue(ListNode* head) {

		int bits = 0;
		ListNode* p = head;
		while (p != nullptr)
		{
			p = p->next;
			bits++;
		}
		p = head;
		
		int result = 0;
		int bit = bits - 1;
		while (p != nullptr)
		{
			result += p->val << bit;
			p = p->next;
			bit--;
		}
		return result;
	}
};