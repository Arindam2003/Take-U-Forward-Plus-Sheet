#include<iostream>
using namespace std;
void even_reverse(int n)
{
    if(n>0)
    {
        if(n%2==0)
        {
            cout<<n<<" ";
        }
        even_reverse(n-1);
    }
}