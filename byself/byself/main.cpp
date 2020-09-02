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
#include "minimum_path_sum_64.hpp"

int  main()
{
	Solution sol;

	vector<int> r1;
	r1.push_back(1);
	r1.push_back(3);
	r1.push_back(1);

	vector<int> r2;
	r2.push_back(1);
	r2.push_back(5);
	r2.push_back(1);

	vector<int> r3;
	r3.push_back(4);
	r3.push_back(2);
	r3.push_back(1);

	vector<vector<int>> path;
	path.push_back(r1);
	path.push_back(r2);
	path.push_back(r3);

	printf("%d",sol.minPathSum(path));

	return 0;
}
