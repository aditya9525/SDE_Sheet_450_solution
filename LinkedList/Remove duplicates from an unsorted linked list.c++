class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_map<int, int>mp;
        Node* curr=head;
        Node* forw=head->next;
        
        mp[curr->data]++;
        while(forw!=NULL){
            mp[forw->data]++;
            if(mp[forw->data] > 1){
                Node* temp=forw;
                curr->next=forw->next;
                forw=forw->next;
                delete(temp);
                temp=NULL;
            }
            else{
                curr=curr->next;
                forw=forw->next;
            }
        }
        curr=NULL;
        return head;
    }
};
