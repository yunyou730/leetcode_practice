#pragma once

#include <vector>

using namespace std;

/*
 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。

 示例 1：

 输入：nums1 = [1,3], nums2 = [2]
 输出：2.00000
 解释：合并数组 = [1,2,3] ，中位数 2
 示例 2：

 输入：nums1 = [1,2], nums2 = [3,4]
 输出：2.50000
 解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5
 示例 3：

 输入：nums1 = [0,0], nums2 = [0,0]
 输出：0.00000
 示例 4：

 输入：nums1 = [], nums2 = [1]
 输出：1.00000
 示例 5：

 输入：nums1 = [2], nums2 = []
 输出：2.00000
  

 提示：

 nums1.length == m
 nums2.length == n
 0 <= m <= 1000
 0 <= n <= 1000
 1 <= m + n <= 2000
 -106 <= nums1[i], nums2[i] <= 106
  

 进阶：你能设计一个时间复杂度为 O(log (m+n)) 的算法解决此问题吗？

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/median-of-two-sorted-arrays
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 
 
 **/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        size_t n1 = nums1.size();
        size_t n2 = nums2.size();
        
        int cnt = n1 + n2;
        if(cnt == 0)
            return 0;
        if(cnt == 1 && n1 == 1)
            return nums1[0];
        if(cnt == 1 && n2 == 1)
            return nums2[0];
        
        
        int toIdx = cnt / 2;
        
        int idx1 = 0;
        int idx2 = 0;

        
        vector<int> r;
        for(int i = 0;i <= toIdx;i++)
        {
            int* n1 = nullptr;
            int* n2 = nullptr;
            if(idx1 < nums1.size())
            {
                n1 = &nums1[idx1];
            }
            if(idx2 < nums2.size())
            {
                n2 = &nums2[idx2];
            }
            
            if(n1 != nullptr && n2 != nullptr)
            {
                if(*n1 < *n2)
                {
                    r.push_back(*n1);
                    idx1++;
                }
                else
                {
                    r.push_back(*n2);
                    idx2++;
                }
            }
            if(n1 == nullptr && n2 != nullptr)
            {
                // only n2
                r.push_back(*n2);
                idx2++;
            }
            if(n1 != nullptr && n2 == nullptr)
            {
                // only n1
                r.push_back(*n1);
                idx1++;
            }
        }
        
        
        bool bOne = (n1 + n2) % 2 == 1;
        if(bOne)
        {
            return r[r.size() - 1];
        }
        else
        {
            return (r[r.size() - 1] + r[r.size() - 2]) * 0.5;
        }
    }
    
    void test()
    {
        vector<int> n1 = {1,2,3,4,100};
        vector<int> n2 = {7,9};
        double r = findMedianSortedArrays(n1,n2);
        printf("%.2f\n",r);
    }
};
