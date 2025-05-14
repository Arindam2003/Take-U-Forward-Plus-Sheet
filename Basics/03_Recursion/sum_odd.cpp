#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return (2*n-1)+sum(n-1);
}
int main()
{
    int x=sum(6);
    cout<<x<<" ";
    cout<<endl;
    return 0;
}