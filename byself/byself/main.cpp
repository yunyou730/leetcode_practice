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
//#include "jump_game_55.hpp"
#include "remove_element_27.hpp"

int  main()
{
	Solution sol;

	vector<int> arr;
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(0);
	arr.push_back(4);
	arr.push_back(2);

	sol.removeElement(arr, 2);
	
	return 0;
}
