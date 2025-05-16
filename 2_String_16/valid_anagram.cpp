#include<iostream>
using namespace std;
bool anagram(string &s,string &t)
{
    int hash1[256]={0};
    int hash2[256]={0};
    if(s.length()!=t.length())
    {
        return false;
    }
    for(int i=0;i<s.length();i++)
    {
        hash1[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        hash2[t[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(hash1[s[i]]!=hash2[s[i]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s="anagram";
    string t="nagaram";
    cout<<anagram(s,t);

}