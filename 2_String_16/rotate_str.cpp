#include<iostream>
using namespace std;

bool rotateString(string &s, string &goal)
{
    if (s.length() != goal.length())
        return false;

    string doubled = s + s;
    int len = goal.length();

    for (int i = 0; i < s.length(); i++)
    {
        string sub = doubled.substr(i, len);
        if (sub == goal)
            return true;
    }

    return false;
}

int main(){
    string s = "abcde";
    string goal = "cfeab";
    cout<<rotateString(s,goal);
}