#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool found = false;
        for (int i = 1; i <= n - 2; ++i)
        {
            string a = s.substr(0, i);
            for (int j = 1; j <= n - i - 1; ++j)
            {
                string b = s.substr(i, j);
                string c = s.substr(i + j);
                string ac = a + c;

                if (ac.find(b) != string::npos)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        cout << (found ? "Yes" : "No") << '\n';
    }
    return 0;
}
