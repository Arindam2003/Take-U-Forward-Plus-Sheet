#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a/b==0)
        {
            return b;
        }
        return (a%b,b);
    }

}
int main()
{
    int x=hcf(20,10);
    cout<<x<<" ";
    return 0;
}