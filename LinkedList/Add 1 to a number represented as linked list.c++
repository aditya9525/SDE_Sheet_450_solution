class Solution{
public:
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* forw=NULL;
        while(curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        Node* new_head = reverse(head);
        Node* curr=new_head;
        Node* prev=NULL;
        int carry=0;
        int sum=0;
        while(curr!=NULL){
            if(prev==NULL){
                sum=curr->data+1;
            }
            else{
                sum=curr->data+carry;
            }
            
            carry=sum/10;
            curr->data=sum%10;
            prev=curr;
            curr=curr->next;
        }
        
        if(carry==1){
            Node* new_node = new Node(1);
            prev->next=new_node;
        }
        
        return reverse(new_head);
    }
};
