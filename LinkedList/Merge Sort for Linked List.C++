class Solution{
  public:
    //Find mid.
    Node* findMid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    //Merge both sorted LL Left & Right.
    Node* merge(Node* left, Node* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        Node* new_node=new Node(-1);
        Node* ans=new_node;
        while(left!=NULL && right!=NULL){
            if(left->data < right->data){
                new_node->next=left;
                new_node=left;
                left=left->next;
            }
            else{
                new_node->next=right;
                new_node=right;
                right=right->next;
            }
        }
        while(left!=NULL){
            new_node->next=left;
            new_node=left;
            left=left->next;
        }
        while(right!=NULL){
            new_node->next=right;
            new_node=right;
            right=right->next;
        }
        ans=ans->next;
        return ans;
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        //find mid
        Node* mid=findMid(head);
        
        //break LL into 2 LL
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        
        //sort both LL recursivle
        left=mergeSort(left);
        right=mergeSort(right);
        
        //mergr both sorted LL 
        Node* result=merge(left, right);
        
        return result;
        
    }
};
