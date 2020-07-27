//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans;
        if(head==NULL)
        {
            return head;
        }
        ans=head;
        while((head->next)!=NULL)
        {
            ListNode* temp;
            temp=head->next;
            if((head->val)==(temp->val))
            {
                head->next=temp->next;
            }
            else if(head->next!=NULL)
            {
                head=head->next;
            }
            cout<<head->val;
            
            
        }
        return ans;
    }
};
