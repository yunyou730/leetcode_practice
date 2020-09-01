//#include "two_sum.hpp"
//#include "add_two_numbers.hpp"
//#include "length_of_longest_sub_string.hpp"
//#include "longest_palindrome.hpp"
//#include "intersection_of_two_linked_lists.hpp"
//#include "linked_list_cycle_ii.hpp"
//#include "reverse_linked_list_206.hpp"
//#include "convert_binary_number_in_a_linked_list_to_integer_1290.hpp"
//#include "reverse_integer_7.hpp"
#include "binary_tree_inorder_traversal_94.hpp"

int  main()
{
	Solution sol;
	TreeNode* tr = new TreeNode(1);
	tr->right = new TreeNode(2);
	tr->right->left = new TreeNode(3);
	//sol.inorderTraversal()
	//int r = sol.reverse(123);
	//printf("%d\n",r);

	vector<int> n = sol.inorderTraversal(tr);
	return 0;
}
