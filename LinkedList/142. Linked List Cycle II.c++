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
    ListNode *detectLoop(ListNode *head){
        if(head==NULL){
            return NULL;
        }
        ListNode* s=head;
        ListNode* f=head;
        while(s!=NULL && f!=NULL){
            f=f->next;
            if(f!=NULL){
                f=f->next;
            }

            s=s->next;

            if(s==f){
                return s;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }

        ListNode* intersection=detectLoop(head);
        if(intersection == NULL){
            return NULL;
        }
        ListNode* s=head;
        while(s!=intersection){
            s=s->next;
            intersection=intersection->next;
        }
        return s;
    }

};
