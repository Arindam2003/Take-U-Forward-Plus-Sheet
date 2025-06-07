#include<iostream>
using namespace std;

//! Brute Force..
int longest_subs(string s)
{
    int maxlen=0;
    for(int i=0;i<s.length();i++)
    {
        vector<int> hash(256,0);
        for(int j=i;j<s.length();j++)
        {
            if(hash[s[j]]==1)
            {
                break;
            }
            hash[s[j]]=1;
            int len=j-i+1;
            maxlen=max(len,maxlen);
        }
    }
    return maxlen;
}

int main()
{
    string s="abcdeabc";
    int len= longest_subs(s);
    cout<<len<<endl;
}   