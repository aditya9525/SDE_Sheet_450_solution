/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return 0;
        }

        ListNode* s=head;
        ListNode* f=head;

        while(s != NULL&& f != NULL){
            f=f->next;
            if(f!=NULL){
                f=f->next;
            }
            s=s->next;

            if(s==f){
                return s;
            }
        }
        return 0;
    }
};
