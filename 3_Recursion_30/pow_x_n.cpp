#include <iostream>

using namespace std;

int pow(int x, int n)
{
    if (n < 0)
    {
        return 1 / pow(x, -n);
    }
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return x;
    }
    //! n is even
    if (n % 2 == 0)
    {
        return pow(x * x, n / 2);
    }
    //! n is odd

    if (n % 2 != 0)
    {
        return x *pow(x, n - 1);
    }
}

int main()
{
    int x, n;
    x = 5;
    n = 4;

    int res= pow(x, n);
    cout<<res<<endl;
    return 0;
}