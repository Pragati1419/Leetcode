//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    Node *rev(Node *head){
        Node *pre=NULL;
        Node *curr=head;
        Node *next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
        
    }
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
         Node * slow=head,*fast=head->next;
         while( fast!=NULL && fast->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next->next;
         }
          Node * temp2=slow->next;
                  slow->next=NULL;
    
         Node* temp=rev(temp2);
           Node* copy=temp;
           Node * he=head;
           Node *pre=NULL;
          while(temp!=NULL )
          {
              pre=temp;
            temp->data= (temp->data) - (he->data);
              temp=temp->next;
             he=he->next;
          }
          Node * temp1=rev(head);
          pre->next=temp1;
          return  copy;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends