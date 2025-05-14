#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1){
        return 1;
    }
    return 2*n+sum(n-1);
}