//struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
// 
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) 
//    {
//        if (head == nullptr) return head;
//        
//        
//		ListNode* dummy = new ListNode();
//		dummy->next = head;
//
//        ListNode* slow = dummy;
//        ListNode* fast = dummy;
//        
//        for (int i = 0;i < n;i++)
//        {
//            fast = fast->next;
//        }
//
//        while (fast->next != nullptr)
//        {
//            slow = slow->next;
//            fast = fast->next;
//        }
//
//        if (slow == dummy)
//        {
//            return slow->next->next;
//        }
//        else
//        {
//            slow->next = slow->next->next;
//			return head;
//        }
//    }
//};


 
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

 class Solution {
 public:
	 vector<int> findMode(TreeNode* root) {
		
	 }
 };
