#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;

/*
	һ�� ������ǰ���� ,���ܰ��˳ɹ�   
	��Ҫ��� 
*/
class Solution {
public:
	int removeElement(vector<int>& nums, int val)
	{
		int i = 0;
		for (int j = 0;j < nums.size();j++)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}
		return i;
	}
};
