#include<iostream>
using namespace std;
void sqFirst(int n)
{
    if(n>0)
    {
        sqFirst(n-1);
        int p=n*n;
        cout<<p<<" ";
    }
}
int main()
{
    int x;
    cout<<"enter number: ";
    cin>>x;
    sqFirst(x);
    cout<<endl;
    return 0;
}