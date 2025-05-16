#include<iostream>

using namespace std;

bool checkPalindrome(string &s)
{
    int start=0;
    int end=s.length()-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s;
    s="aabbaa";
    cout<<checkPalindrome(s);
}