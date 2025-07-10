#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    for (size_t i = 1; i < S.size(); i++)
    {
        if (isupper(S[i]))
        {
            char prev = S[i - 1];

            if (T.find(prev) == string::npos)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
