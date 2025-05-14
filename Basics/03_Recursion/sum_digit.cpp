#include<iostream>
using namespace std;
int digitsum(int n)
{
    if(n/10==0)
    {
        return n;
    }
    return (n%10)+digitsum(n/10);
}
int main()
{
    int x=digitsum(3692);
    cout<<x<<" ";
    cout<<endl;
    return 0;
}