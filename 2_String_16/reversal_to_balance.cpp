#include<iostream>
using namespace std;


int countRev(string s)
{
    if (s.size() % 2)
        return -1;

    int open = 0;
    int close = 0;
    int i = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            open++;
        }
        else
        {
            if (open > 0)
            {
                open--;
            }
            else
            {
                close++;
            }
        }
    }
    int num = (open / 2) + (open % 2) + (close / 2) + (close % 2);
    return num;
}

int main()
{
    string s="(())))))";
    int num=countRev(s);
    cout<<num;
}