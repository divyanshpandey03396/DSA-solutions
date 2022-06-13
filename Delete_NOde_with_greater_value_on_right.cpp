// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *rev(Node *head)
    {
        Node* curr=head;
        Node* prev=nullptr;
        Node* fast=nullptr;
        while(curr)
        {
            fast=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fast;
        }
        return prev;
    }
   Node *compute(Node *head)
   {
       if(!head) return nullptr;
       head=rev(head);
       Node* prev=head;
       Node* q=head;
       head=head->next;
       while (head)
       {
           if(head->data>=prev->data)
           {
               head=head->next;
               prev=prev->next;
           }
           else{
               prev->next=head->next;
               head=prev->next;
           }
       }
       head=rev(q);
       return head;
   }
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends