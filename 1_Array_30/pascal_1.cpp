#include<iostream>
#include<algorithm>

using namespace std;

int factorial(int);
int nCr(int,int);
int pascal(int,int);

int main()
{
    int row,col;
    cin>>row>>col;
    int result=pascal(row,col);
    cout<<result<<endl;
    return 0;
}

int factorial(int n)
{
    int ans=1;
    while(n)
    {
        ans=ans*n;
        n--;
    }
    return ans;
}

int nCr(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int pascal(int r,int c)
{
    if (r== 1 || c == 1 || c == r)
    {
        return 1;
    }
    int ans=nCr(r-1,c-1);
    return ans;
}