#include <stdio.h>
#include <vector>
#include <set>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>		result;
		map<int, int>	numMap;
		for (int i = 0;i < nums.size();i++)
		{
			int curNum = nums[i];
			int needNum = target - curNum;
			if (numMap.find(needNum) != numMap.end())
			{
				result.push_back(i);
				result.push_back(numMap[needNum]);
				break;
			}
			if (numMap.find(curNum) == numMap.end())
			{
				numMap.insert(std::make_pair(curNum, i));
			}
		}
		return result;
	}
};

int  main()
{
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(7);
	vec.push_back(11);
	vec.push_back(15);

	Solution solution;
	vector<int> result = solution.twoSum(vec,9);

	return 0;
}
