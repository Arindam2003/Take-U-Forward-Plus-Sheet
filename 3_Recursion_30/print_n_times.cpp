#include<iostream>
using namespace std;

void func(int n)
{
    if(n<1) return;
    cout<<"Arindam"<<endl;
    func(n-1);
}

int main()
{   int n;
    cin>>n;
    func(n);
}