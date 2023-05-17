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
        if(head==NULL){
            return NULL;
        }
        ListNode* curr=head;
        ListNode* duplicate=NULL;
        ListNode* forw=NULL;
        while(curr->next!=NULL){
            forw=curr->next->next;
            duplicate=curr->next;

            if(curr->val == curr->next->val){
                delete duplicate;
                curr->next=forw;
            }
            else{
                curr=curr->next;
            }
        } 
        return head;
    }
};
