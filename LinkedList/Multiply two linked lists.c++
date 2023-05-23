long long  multiplyTwoLists (Node* l1, Node* l2)
{
    Node* curr1=l1;
    Node* curr2=l2;
    long long ans=0;
    long long ans1=0;
    long long m=1000000007;
    while(curr1 != NULL){
        ans=((10*ans)+curr1->data)%m;
        curr1=curr1->next;
    }
    while(curr2 != NULL){
        ans1=((10*ans1)+curr2->data)%m;
        curr2=curr2->next;
    }
    int result=(ans*ans1)%m;
    return result;
}
