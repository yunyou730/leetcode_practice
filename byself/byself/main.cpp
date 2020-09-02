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
#include "maximum_subarray.hpp"

int  main()
{
	vector<int> v;
	v.push_back(-2);
	v.push_back(1);
	v.push_back(-3);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(-5);
	v.push_back(4);
	Solution sol;
	printf("%d\n", sol.maxSubArray(v));
	
	return 0;
}
