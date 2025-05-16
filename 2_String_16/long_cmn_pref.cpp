#include<iostream>

using namespace std;

int main()
{
    vector<string> str = {"flowers", "flow", "fly", "flight"};

    sort(str.begin(),str.end());

    string first=str[0];
    string last=str[str.size()-1];
    
    int mini=min(first.length(),last.length());
    string ans="";
    for(int i=0;i<mini;i++)
    {
        if(first[i]!=last[i])
        {
            break;
        }
        ans=ans+first[i];
    }
    cout<<ans;

    // for(auto s:str)
    // {
    //     cout<<s<<' ';
    // }
}