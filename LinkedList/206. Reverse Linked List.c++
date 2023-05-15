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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
               
        if(head==NULL){
            return head;
        }
        while(curr!=NULL){
            ListNode* forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
        
    }
};
