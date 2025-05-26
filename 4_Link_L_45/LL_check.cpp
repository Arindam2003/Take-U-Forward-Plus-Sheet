#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int setData,Node* setNext)
        {
            data=setData;
            next=setNext;
        }
        Node(int setData)
        {
            data=setData;
            next=nullptr;
        }
};


Node* convertArrtoLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

Node* deleteHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteLast(Node* &head)
{
    Node* temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=del->next;
    delete del;
    return head;
}

int main()
{
    vector<int> arr={12,3,4,2,0};
    cout << "Array to LL" << endl;
    Node *head=convertArrtoLL(arr);
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    //! After Head Delete
    cout<<"After Delete Head"<<endl;
    head=deleteHead(head);
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //! After Last Delete
    cout<<"After Delete Head"<<endl;
    head=deleteHead(head);
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

