#pragma once
#include <cstdio>
#include <vector>

using namespace std;

/*
 给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

 请你将两个数相加，并以相同形式返回一个表示和的链表。

 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 
 输入：l1 = [2,4,3], l2 = [5,6,4]
 输出：[7,0,8]
 解释：342 + 465 = 807.
 示例 2：

 输入：l1 = [0], l2 = [0]
 输出：[0]
 示例 3：

 输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 输出：[8,9,9,9,0,0,0,1]
  

 提示：

 每个链表中的节点数在范围 [1, 100] 内
 0 <= Node.val <= 9
 题目数据保证列表表示的数字不含前导零

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/add-two-numbers
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 **/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* res = nullptr;
        ListNode* tail = nullptr;
        int buff = 0;
        
        ListNode* n1 = l1;
        ListNode* n2 = l2;
        while(n1 != nullptr || n2 != nullptr)
        {
            int sum = buff;
            if(n1 != nullptr)
            {
                sum += n1->val;
            }
            if(n2 != nullptr)
            {
                sum += n2->val;
            }
            buff = sum / 10;
            sum %= 10;
            
            ListNode* node = new ListNode();
            node->val = sum;
            
            if(res == nullptr)
            {
                res = node;
                tail = res;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
            
            tail = node;
            
            if(n1 != nullptr)
            {
                n1 = n1->next;
            }
            
            if(n2 != nullptr)
            {
                n2 = n2->next;
            }
        }
        
        if(buff > 0)
        {
            ListNode* node = new ListNode();
            node->val = buff;
            tail->next = node;
            tail = node;
        }
        
        return res;
    }
    
    void printList(ListNode* node)
    {
        printf("list begin\n");
        while(node != nullptr)
        {
            printf("%d\n",node->val);
            node = node->next;
        }
        printf("list end -------- \n");
    }
    
    
    ListNode* createNode(vector<int> vals)
    {
        ListNode* result = nullptr;
        ListNode* tail = nullptr;
        for(int i = 0;i < vals.size();i++)
        {
            if(result == nullptr)
            {
                result = new ListNode();
                tail = result;
            }
            else
            {
                tail->next = new ListNode();
                tail = tail->next;
            }
            tail->val = vals[i];
        }
        return result;
    }
    
    void test()
    {
        ListNode* l1 = createNode({9,9,9,9,9,9,9});
        printList(l1);
        
        ListNode* l2 = createNode({9,9,9,9,});
        printList(l2);
        
        ListNode* r = addTwoNumbers(l1,l2);
        printList(r);
    }
};
