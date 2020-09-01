//#include "two_sum.hpp"
//#include "add_two_numbers.hpp"
//#include "length_of_longest_sub_string.hpp"
//#include "longest_palindrome.hpp"
//#include "intersection_of_two_linked_lists.hpp"
#include "linked_list_cycle_ii.hpp"

int  main()
{
	Solution sol;

	ListNode* p1 = new ListNode(3);
	ListNode* p2 = new ListNode(2);
	//p1->next = p2;
	//p2->next = p1;
	ListNode* p3 = new ListNode(0);
	ListNode* p4 = new ListNode(4);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p2;

	//ListNode* inter = new ListNode(8);
	//inter->next = new ListNode(4);
	//inter->next->next = new ListNode(5);


	//ListNode* headA = new ListNode(4);
	//headA->next = new ListNode(1);
	//headA->next->next = inter;

	//ListNode* headB = new ListNode(5);
	//headB->next = new ListNode(6);
	//headB->next->next = new ListNode(1);
	//headB->next->next->next = inter;

	//ListNode* node = sol.getIntersectionNode(headA,headB);
	ListNode* node = sol.detectCycle(p1);

	return 0;
}
