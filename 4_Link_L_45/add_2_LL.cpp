#include<iostream>
#include <list>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};

ListNode* convert(vector<int> temp)
{
    if(temp.size()==0)
    {
        return nullptr;
    }
    ListNode* head=new ListNode(temp[0]);
    ListNode* temphead=head;
    for(int i=1;i<temp.size();i++)
    {
        ListNode* arr=new ListNode(temp[i]);
        temphead->next=arr;
        temphead=temphead->next;
    }
    return head;
}

int main()
{
    vector<int> v1 = {1, 3, 2, 8, 9};
    vector<int> v2 = {3, 0, 8, 5};
    ListNode* h1=convert(v1);
    ListNode* h2=convert(v2);
    // while(h1!=nullptr)
    // {
    //     cout<<h1->val;
    //     h1=h1->next;
    // }
    ListNode* dummy=new ListNode(-1);
    int carry=0;
    ListNode* temp=dummy;
    while (h1!=nullptr || h2!=nullptr || carry!=0)
    {
        int sum=0;
        if(h1!=nullptr)
        {
            sum=sum+h1->val;
            h1=h1->next;
        }
        if(h2!=nullptr)
        {
            sum=sum+h1->val;
            h2=h2->next;
        }
        sum=sum+carry;
        carry=sum/10;
        ListNode* node=new ListNode(sum%10);
        temp->next=node;
        temp=temp->next;
    }
    while (dummy->next!=nullptr)
    {
        cout<<dummy->next->val;
        dummy->next=dummy->next->next;
    }
}