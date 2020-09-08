//#include "two_sum.hpp"
//#include "add_two_numbers.hpp"
//#include "length_of_longest_sub_string.hpp"
//#include "longest_palindrome.hpp"
//#include "intersection_of_two_linked_lists.hpp"
//#include "linked_list_cycle_ii.hpp"
//#include "reverse_linked_list_206.hpp"
//#include "convert_binary_number_in_a_linked_list_to_integer_1290.hpp"
//#include "reverse_integer_7.hpp"
//#include "binary_tree_inorder_traversal_94.hpp"
//#include "same_tree_100.hpp"
//#include "minimum_path_sum_64.hpp"
//#include "unique_path_62.hpp"
//#include "unique_path_ii_63.hpp"
//#include "climbing_stairs_70.hpp"
//#include "maximum_subarray.hpp"
//#include "minimum_depth_of_binary_tree_111.hpp"
//#include "surrounded_regions_130.hpp"
//#include "binary_tree_dfs_bfs_test.hpp"
//#include "remove_Nth_node_from_end_of_list_19.hpp"
//#include  "swap_nodes_in_pairs_24.hpp"
//#include "merge_two_sorted_lists_21.hpp"
//#include "merge_k_sorted_lists_23.hpp"
//#include "palindrome_number_9.hpp"
//#include "letter_combinations_of_a_phone_number_17.hpp"
//#include "jump_game_ii_45.hpp"
#include "jump_game_55.hpp"

int  main()
{
	//vector<int> v;
	//v.push_back(-2);
	//v.push_back(1);
	//v.push_back(-3);
	//v.push_back(4);
	//v.push_back(-1);
	//v.push_back(2);
	//v.push_back(1);
	//v.push_back(-5);
	//v.push_back(4);
	//Solution sol;
	//printf("%d\n", sol.maxSubArray(v));

	//TreeNode* root = new TreeNode(3);
	//root->left = new TreeNode(9);
	//root->left->left = new TreeNode(9);
	//root->left->left->left = new TreeNode(9);
	//root->right = new TreeNode(20);
	//root->right->left = new TreeNode(15);
	//root->right->right = new TreeNode(7);

	/*
	X X X X
	X O O X
	X X O X
	X O X X
	*/
	//Solution sol;
	//vector<vector<char>> board;
	//sol.addRow(board, "XOXXXX", 6);
	//sol.addRow(board, "XOOXOX", 6);
	//sol.addRow(board, "XXOXOX", 6);
	//sol.addRow(board, "XOXXXO", 6);
	//
	//sol.dump(board);
	//sol.solve(board);
	//sol.dump(board);


	/*
			0,
		  1,   2,
	   3,  4,    5,
				6, 7,
	*/
	/*
	TreeNode* root = new TreeNode(0);
	root->left = new TreeNode(1);
	root->right = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(4);
	root->right->right = new TreeNode(5);
	root->right->right->left = new TreeNode(6);
	root->right->right->right = new TreeNode(7);

	Solution sol;
	sol.dfsNotRecr(root);
	printf("-----------------\n");
	sol.dfsRecr(root);
	printf("-----------------\n");
	sol.bfs(root);
	*/
	
	/*
	ListNode* head = nullptr;
	Solution sol;
	sol.makeList(&head,1);
	sol.dump(head);
	head = sol.removeNthFromEnd(head, 1);
	sol.dump(head);
	*/

	//Solution sol;
	//ListNode* head = sol.makeList(30);
	//sol.dump(head);
	//head = sol.swapPairs(head);
	//sol.dump(head);


	//ListNode* l1 = new ListNode(1);
	//l1->next = new ListNode(4);
	//l1->next->next = new ListNode(5);

	//ListNode* l2 = new ListNode(1);
	//l2->next = new ListNode(3);
	//l2->next->next = new ListNode(4);

	//ListNode* l3 = new ListNode(2);
	//l3->next = new ListNode(6);

	//vector<ListNode*> lists;
	//lists.push_back(l1);
	//lists.push_back(l2);
	//lists.push_back(l3);

	//Solution sol;
	//ListNode* node = sol.mergeKLists(lists);

	//while (node != nullptr)
	//{
	//	printf("%d\n",node->val);
	//	node = node->next;
	//}

	//Solution sol;
	//sol.isPalindrome(121);
	Solution sol;
	vector<int> steps;
	steps.push_back(3);
	steps.push_back(2);
	steps.push_back(1);
	steps.push_back(0);
	steps.push_back(4);
	//[3, 1, 1, 1, 1]
	//printf("%d steps\n", sol.jump(steps));
	if (sol.canJump(steps))
	{
		printf("aaa\n");
	}
	else
	{
		printf("bbbb\n");
	}
	return 0;
}
