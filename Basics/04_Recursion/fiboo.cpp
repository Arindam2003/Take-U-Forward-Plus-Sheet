#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
void fiboo(int n)
{
    if(n>=0)
    {
        fiboo(n-1);
        cout<<fib(n)<<" ";
    }
}
int main()
{
    fiboo(10);
    cout<<endl;
    return 0;
}