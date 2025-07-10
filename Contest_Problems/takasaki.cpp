#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int input;
    cin>>input;
    int count=0;
    while(input--)
    {
        int a,b;
        cin>>a>>b;
        if(b>a)
        {
            count++;
        }
    }
    cout<<count;
}