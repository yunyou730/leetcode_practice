//#include "two_sum.hpp"
#include "add_two_numbers.hpp"

int  main()
{
	
	ListNode* l1 = new ListNode(2);
	ListNode* ol1 = l1;
	l1->next = new ListNode(4);
	l1 = l1->next;
	l1->next = new ListNode(3);

	ListNode* l2 = new ListNode(5);
	ListNode* ol2 = l2;
	l2->next = new ListNode(6);
	l2 = l2->next;
	l2->next = new ListNode(9);

	Solution solution;
	ListNode* result = solution.addTwoNumbers(ol1,ol2);

	while (result != nullptr)
	{
		printf("%d" ,result->val);
		result = result->next;
	}

	return 0;
}
