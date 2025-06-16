#include<iostream>
using namespace std;

void gen_para(string s,vector<string> &l,int open,int close,int n)
{
    if(open>n)
    {
        return;
    }
    if(open+close==2*n && open==close)
    {
        l.push_back(s);
        return;
    }
    gen_para(s+"(",l,open+1,close,n);
    if(open>close)
    {
        gen_para(s + ")", l, open, close+1, n);
    }
}

vector<string> paranthesis(int n)
{
    vector<string> ans;
    gen_para("",ans,0,0,n);
    return ans;
}

int main()
{
    int n=3;
    vector<string> s= paranthesis(n);
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}