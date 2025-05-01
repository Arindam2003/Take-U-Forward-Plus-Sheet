#include<iostream>
#include<string>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    vector<string>str = {"flowers","flow","fly", "flight"};
    sort(str.begin(),str.end());
    for(const string& s: str)
    {
        cout<<s<<endl;
    }
    
    return 0;
}