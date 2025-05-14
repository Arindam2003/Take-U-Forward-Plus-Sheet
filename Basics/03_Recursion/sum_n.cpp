#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    int x=sum(5);
    cout<<x<<endl;
    return 0;
}