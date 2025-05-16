#include <iostream>

using namespace std;

bool isoomorphic(string s, string t)
{
    int m1[256] = {0}, m2[265] = {0};
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if(m1[s[i]]!=m2[t[i]])
        {
            return false;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}

/*
    p -> t
    a -> i
    p -> t
    e -> l
    r -> e
*/

int main()
{
    string s = "paper";
    string t = "title";
    int map[256] = {0};
    // map['a']=3;
    // cout<<map['a'];
    cout<<isoomorphic(s,t);
}