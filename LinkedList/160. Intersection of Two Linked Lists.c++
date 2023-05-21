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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1=headA;
        ListNode* curr2=headB;
        int length1=0;
        int length2=0;

        //first we count lenght of both list
        while(curr1!=NULL){
            curr1=curr1->next;
            length1++;
        }
        while(curr2!=NULL){
            curr2=curr2->next;
            length2++;
        }

        while(length1 != length2){
            if(length1 > length2){
                headA=headA->next;
                length1--;
            }
            else{
                headB=headB->next;
                length2--;
            }
        }

        while(headA != headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
