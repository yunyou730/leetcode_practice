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
//#include "remove_element_27.hpp"
//#include "implement_strstr_28.hpp"
//#include "solve_queens_51.hpp"
#include "spiral_matrix_54.hpp"

int  main()
{
    vector<vector<int>> matrix;
    

    //[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
    vector<int> row;
    row.push_back(1);
    row.push_back(2);
    row.push_back(3);
    row.push_back(4);
    matrix.push_back(row);

    row.clear();
	row.push_back(5);
	row.push_back(6);
    row.push_back(7);
    row.push_back(8);
    matrix.push_back(row);

    row.clear();
	row.push_back(9);
	row.push_back(10);
	row.push_back(11);
    row.push_back(12);
    matrix.push_back(row);

	row.clear();
	row.push_back(13);
	row.push_back(14);
	row.push_back(15);
	row.push_back(16);
	matrix.push_back(row);

    Solution sol;
    vector<int> r = sol.spiralOrder(matrix);
    
    for (int  i  = 0;i < r.size();i++)
    {
        printf("%d,",r[i]);
    }



    //sol.solveNQueens(8);

    /*
    vector<string> board;

    int size = 4;
    sol.init(board, size);
    sol.dump(board, size);
    auto func = [&](int row, int col)
    {
        bool bSucc = sol.checkValid(board, size, row, col);
        if (bSucc)
        {
            sol.placeQueen(board, row, col);
        }
        printf("row %d,col %d,succ %d\n",row,col,bSucc);
        sol.dump(board, size);
    };*/


    //func(0, 3);
    //func(1, 2);
    //func(0, 2);
    //func(1, 0);
    //func(2, 3);
    //func(3, 1);
    //func(3, 2);

    return 0;
}


