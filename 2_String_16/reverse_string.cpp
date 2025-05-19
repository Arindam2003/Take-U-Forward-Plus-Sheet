#include<iostream>
using namespace std;

void reverse(string s)
{
    int len=s.length();
    vector<string>words;
    string temp="";
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            if(!temp.empty())
            {
                words.push_back(temp);
                temp = "";
            }
        }
        else{
            temp = temp + s[i];
        }
    }
    if (!temp.empty())
        words.push_back(temp);
        
    int start=0;
    int end=words.size()-1;
    while(start<end)
    {
        swap(words[start],words[end]); 
        start++;
        end--;  
    }
    string ans;
    for(int i=0;i<words.size();i++)
    {
        ans=ans+words[i];
        if(i!=words.size()-1)
        {
            ans=ans+" ";
        }
    }
    cout<<ans;
}

int main(){
    string s = "welcome to the jungle";
    reverse(s);
    
}