#include<iostream>
using namespace std;
void print_odd_reverse(int n)
{
    if(n>0)
    {
        if(n%2!=0)
        {
            cout<<n<<" ";
        }
        print_odd_reverse(n-1);
    }
}

// call from main funciton