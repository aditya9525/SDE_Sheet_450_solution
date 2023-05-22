//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //find mid
    Node* findMid(Node* head){
        Node* s=head;
        Node* f=head->next;
        while(f!=NULL && f->next!=NULL){
            f=f->next->next;
            s=s->next;
            
        }
        return s;
    }
    
    //reverse LL;
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL){
            return true;
        }
        //Step1: find mid;
        Node* mid=findMid(head);
        
        //Step2: reverse mid->next list;
        Node* temp=mid->next;
        mid->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=mid->next;
        while(head2!=NULL){
            if(head2->data != head1->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        temp=mid->next;
        mid->next=reverse(temp);
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
