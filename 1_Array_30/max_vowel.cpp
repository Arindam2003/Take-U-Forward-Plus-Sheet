#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &s)
{
    string vowels = "sss";
    int count = 0;

    for (char c : s)
    {
        if (vowels.find(c) != string::npos)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string str = "ChatGPT is amazing!";
    cout << "Total vowels: " << countVowels(str) << endl;
    return 0;
}
