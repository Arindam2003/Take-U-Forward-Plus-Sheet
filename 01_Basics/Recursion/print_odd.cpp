#include<iostream>
using namespace std;
void printodd(int n)
{
    if(n>0)
    {
        printodd(n-1);
        if(n%2!=0)
        {
            cout<<n<<" ";
        }
    }
}
//call from main function