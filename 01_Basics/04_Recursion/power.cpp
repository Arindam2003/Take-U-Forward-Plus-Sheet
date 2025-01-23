#include<iostream>
using namespace std;
int power(int e,int p)
{
    if(p==0){
        return 1;
    }
    return e*power(e,p-1);
}
int main()
{
    int x=power(2,5);
    cout<<x<<" ";
    cout<<endl;
    return 0;
}