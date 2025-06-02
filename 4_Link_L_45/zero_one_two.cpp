#include <iostream>
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

ListNode *convert(vector<int> temp)
{
    if (temp.size() == 0)
    {
        return nullptr;
    }
    ListNode *head = new ListNode(temp[0]);
    ListNode *temphead = head;
    for (int i = 1; i < temp.size(); i++)
    {
        ListNode *arr = new ListNode(temp[i]);
        temphead->next = arr;
        temphead = temphead->next;
    }
    return head;
}

ListNode* zero_one_two(ListNode* h1)
{
    if (h1 == nullptr || h1->next == nullptr)
    {
        return h1;
    }
    ListNode* zerohead=new ListNode(-1);
    ListNode* zeromover=zerohead;
    ListNode* onehead=new ListNode(-1);
    ListNode* onemover=onehead;
    ListNode* twohead=new ListNode(-1);
    ListNode* twomover=twohead;
    ListNode* temp=h1;
    while(h1!=nullptr || h1->next!=nullptr)
    {
        if(temp->val==0)
        {
            zeromover->next=temp;
            zeromover=zeromover->next;
        }
        else if(temp->val==1)
        {
            
        }
    }
}

int main()
{
    vector<int> v1 = {1,0,2,0,1};
    ListNode *h1 = convert(v1);


}