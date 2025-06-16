#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = nullptr;
    }
    Node()
    {
        val = 0;
        next = nullptr;
    }
};

Node *intersection(Node *head1, Node *head2)
{
    Node *h1 = head1;
    Node *h2 = head2;
    if (h1 == nullptr || h2 == nullptr)
    {
        return nullptr;
    }
    while (h1 != nullptr && h2 != nullptr)
    {
        h1 = h1->next;
        h2 = h2->next;
        if (h1 == h2)
        {
            return h1;
        }

        if (h1 == nullptr)
        {
            h1 =head2;
        }
        if(h2==nullptr)
        {
            h2=head1;
        }
    }
    return nullptr;
}
