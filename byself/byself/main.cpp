//#include "two_sum.hpp"
//#include "add_two_numbers.hpp"
//#include "length_of_longest_sub_string.hpp"
//#include "longest_palindrome.hpp"
#include "intersection_of_two_linked_lists.hpp"

int  main()
{
	Solution sol;

	ListNode* inter = new ListNode(8);
	inter->next = new ListNode(4);
	inter->next->next = new ListNode(5);


	ListNode* headA = new ListNode(4);
	headA->next = new ListNode(1);
	headA->next->next = inter;

	ListNode* headB = new ListNode(5);
	headB->next = new ListNode(6);
	headB->next->next = new ListNode(1);
	headB->next->next->next = inter;

	ListNode* node = sol.getIntersectionNode(headA,headB);

	return 0;
}
