#include<iostream>
using namespace std;
void reverse_number(int n)
{
    if(n>0)
    {
        cout<<n%10;
        reverse_number(n/10);
    }
}
int main()
{
    int x;
    cout<<"Enter A number: ";
    cin>>x;
    reverse_number(x);
    cout<<endl;
    return 0;
}