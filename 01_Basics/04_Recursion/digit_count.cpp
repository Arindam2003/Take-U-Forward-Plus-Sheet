#include<iostream>
using namespace std;
int digitcount(int x)
{
    if(x==0)
    {
        return 0;
    }
    return digitcount(x/10)+1;
}