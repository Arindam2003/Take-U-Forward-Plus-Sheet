#include<iostream>
using namespace std;
void deciTobinary(int n)
{
    if(n>0)
    {
        deciTobinary(n/8);
        cout<<n%8<<" ";
    }
}
int main()
{
    int x;
    cout<<"Enter number: ";
    cin>>x;
    deciTobinary(x);
    cout<<endl;
    return 0;
}