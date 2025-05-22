#include<iostream>
using namespace std;

void fun(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return ;
    }
    fun(i-1,sum+i);
}
int main()
{
    int n;
    cin>>n;
    fun(n,0);
}