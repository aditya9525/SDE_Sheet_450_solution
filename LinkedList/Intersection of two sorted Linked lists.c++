Node* findIntersection(Node* head1, Node* head2){
    Node* new_list=new Node(0);
    Node* ans=new_list;
    Node* curr1=head1;
    Node* curr2=head2;
    
    while(curr1 != NULL && curr2 != NULL){
        if(curr1->data==curr2->data){
            ans->next=new Node(curr1->data);
            ans=ans->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else if(curr1->data > curr2->data){
            curr2=curr2->next;
        }
        else{
            curr1=curr1->next;
        }
    }
    return new_list->next;
}
