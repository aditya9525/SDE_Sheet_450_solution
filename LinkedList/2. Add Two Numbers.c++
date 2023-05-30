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
    void insertData(ListNode* &head, ListNode* &tail, int data){
        ListNode* newNode=new ListNode(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
    }
    ListNode* addTowList(ListNode* curr1, ListNode* curr2){
        ListNode* currHead=NULL;
        ListNode* currTail=NULL;
        int carry=0;
        while(curr1!=NULL || curr2!=NULL || carry!=0){
            int val1=0;
            if(curr1!=NULL){
                val1=curr1->val;
            }
            int val2=0;
            if(curr2!=NULL){
                val2=curr2->val;
            }
            int sum=val1+val2+carry;
            int lastDigit=sum%10;
            insertData(currHead, currTail, lastDigit);
            carry=sum/10;
            if(curr1!=NULL){
                curr1=curr1->next;
            }
            if(curr2!=NULL){
                curr2=curr2->next;
            }
        }
        return currHead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=addTowList(l1, l2);
        return ans;
    }
};
