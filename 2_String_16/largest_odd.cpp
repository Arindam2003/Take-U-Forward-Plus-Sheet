#include<iostream>

using namespace std;

int main()
{
    string str = "0032579";
    int n=str.length();
    int end_point=-1;
    for(int i=n-1;i>=0;i--)
    {
        if((str[i]-'0')%2!=0)
        {
            end_point=i;
            break;
        }
    }
    int i=0;
    while(i<=end_point && str[i]=='0') i++;
    string news=str.substr(i,end_point-i+1);
    cout<<news;
}