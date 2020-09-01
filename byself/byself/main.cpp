//#include "two_sum.hpp"
//#include "add_two_numbers.hpp"
//#include "length_of_longest_sub_string.hpp"
//#include "longest_palindrome.hpp"
//#include "intersection_of_two_linked_lists.hpp"
//#include "linked_list_cycle_ii.hpp"
#include "reverse_linked_list_206.hpp"

int  main()
{
	Solution sol;

	ListNode* p1 = new ListNode(0);
	ListNode* p2 = new ListNode(1);
	ListNode* p3 = new ListNode(2);
	ListNode* p4 = new ListNode(3);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;

	sol.reverseList(p1);

	return 0;
}
