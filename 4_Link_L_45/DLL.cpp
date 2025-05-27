#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
        Node(int val)
        {
            data=val;
            next=nullptr;
            prev=nullptr;
        }
        Node(int val,Node* next1,Node* prev1){
            data=val;
            next=next1;
            prev=prev1;
        }
};














































Node* ArrToLL(vector<int> nums)
{
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++)
    {
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=mover->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 3, 4, 2, 0};
    cout << "Array to LL" << endl;
    Node *head = ArrToLL(arr);
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    
    /*//! After Head Delete
    cout << "After Delete Head" << endl;
    head = deleteHead(head);
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    //! After Last Delete
    cout << "After Delete Last" << endl;
    head = deleteLast(head);
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    */
}