#include<iostream>
using namespace std;
int sq_sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+sq_sum(n-1);
}