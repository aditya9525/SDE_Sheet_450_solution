LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* secondLast=NULL;

    while(curr->next!=NULL){
        secondLast=curr;
        curr=curr->next;
    }
    
    secondLast->next=NULL;
    curr->next=head;
    return curr;

}
