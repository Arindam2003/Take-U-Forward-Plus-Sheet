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

int main(){
    vector<int> v1 = {1, 3, 2, 8, 9};
    ListNode* h1 = convert(v1);
    ListNode* odd= h1;
    ListNode* even=h1->next;
    ListNode* evenhead=even;
    while (even!=nullptr && even->next!=nullptr)
    {
        odd->next = odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenhead;
}