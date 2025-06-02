#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
    Node(int val, Node *next1, Node *prev1)
    {
        data = val;
        next = next1;
        prev = prev1;
    }
};

Node *ArrToLL(vector<int> nums)
{
    Node *head = new Node(nums[0]);
    Node *mover = head;
    for (int i = 1; i < nums.size(); i++)
    {
        Node *temp = new Node(nums[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = mover->next;
    }
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *temp;
    temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = nullptr;
    delete del;
    return head;
}
Node *deleteKthElement(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        if (head)
            head->prev = nullptr;
        delete temp;
        return head;
    }
    int i = 1;
    Node *temp = head;
    while (temp != nullptr && i < k - 1)
    {
        temp = temp->next;
        i++;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        return head;
    }
    Node *del = temp->next;
    temp->next = del->next;
    if (del->next != nullptr)
    {
        del->next->prev = temp;
    }
    delete del;
    return head;
}
void deleteGivenNode(Node *node)
{
    Node *nodetemp = node;
    Node *tempprev = node->prev;
    Node *tempnxt = node->next;
    if (tempnxt == nullptr)
    {
        tempprev->next = nullptr;
    }
    else
    {
        tempprev->next = tempnxt;
        tempnxt->prev = tempprev;
    }
    delete nodetemp;
}
Node *insertBeforeHead(Node *head, int X)
{
    Node *newHead = new Node(X, head, nullptr);
    head->prev = newHead;
    return newHead;
}
Node *insertBeforeTail(Node *head, int X)
{
    Node *newnode = new Node(X);
    if (head == nullptr)
    {
        head = newnode;
        return head;
    }
    if (head->next == nullptr)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return head;
    }
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    Node *tempnxt = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = tempnxt;
    tempnxt->prev = newnode;
    return head;
}
Node *insertBeforeKthPosition(Node *head, int X, int K)
{
    Node *newnode = new Node(X);

    if (head == nullptr)
    {
        head = newnode;
        return head;
    }
    if (K == 1)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return head;
    }
    int i = 1;
    Node *temp = head;
    while (temp != nullptr && i < K - 1)
    {
        temp = temp->next;
        i++;
    }
    Node *tempnxt = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = tempnxt;
    tempnxt->prev = newnode;
    return head;
}
int main()
{
    vector<int> arr = {12, 3, 4, 2, 0};
    cout << "Array to DLL" << endl;
    Node *head = ArrToLL(arr);
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    //! After Head Delete
    cout << "After Delete Head" << endl;
    head = deleteHead(head);
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    //! After Last Delete
    cout << "After Delete Last" << endl;
    head = deleteTail(head);
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}