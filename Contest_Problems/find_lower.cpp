#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            freq[c - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << char('a' + i);
            break;
        }
    }
}