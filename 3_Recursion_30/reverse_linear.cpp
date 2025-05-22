#include <iostream>

using namespace std;
void func(int i, int n)
{
    if (i > n)
        return;
    cout << n << endl;
    func(i, n-1);
}

int main()
{
    int n;
    cin >> n;
    func(1, n);
}