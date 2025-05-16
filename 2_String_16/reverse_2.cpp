#include<iostream>
using namespace std;

void reverse(vector<char> &s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

int main()
{
    vector<char>  str={'h','e','l','l','o'};
    reverse(str);

    for(auto x: str)
    {
        cout<<x<<" ";
    }
}