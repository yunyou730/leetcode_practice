/*
46. 全排列
给定一个 没有重复 数字的序列，返回其所有可能的全排列。

示例 :

输入: [1, 2, 3]
输出 :
	[
		[1, 2, 3],
		[1, 3, 2],
		[2, 1, 3],
		[2, 3, 1],
		[3, 1, 2],
		[3, 2, 1]
	]
*/

#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		vector<int> cur;
		set<int> used;
		dfs(nums, res, cur, used);
		return res;
	}

	void dfs(const vector<int>& nums, vector<vector<int>>& res, vector<int>& cur, set<int>& used)
	{
		if (cur.size() == nums.size())
		{
			res.push_back(cur);
			return;
		}

		for (int i = 0;i < nums.size();i++)
		{
			if (used.find(i) == used.end())
			{
				cur.push_back(nums[i]);
				used.insert(i);
				dfs(nums,res,cur,used);

				used.erase(i);
				cur.erase(cur.end() - 1);
			}
		}
	}

	void test()
	{
		vector<int> list = {1,2,3};
		dump(permute(list));
	}

	void dump(const vector<vector<int>>& res)
	{
		printf("======\n");
		for (int row = 0;row < res.size();row++)
		{
			printf("------\n");
			for (int col = 0;col < res[row].size();col++)
			{
				printf("%d ",res[row][col]);
			}
			printf("\n");
		}
	}
};
