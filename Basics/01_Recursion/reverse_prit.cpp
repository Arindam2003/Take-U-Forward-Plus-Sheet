#include<iostream>
using namespace std;
void reverse(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        reverse(n-1);
    }
}
int main()
{
    int x;
    cout<<"Enter Number";
    cin>>x;
    reverse(x);
}