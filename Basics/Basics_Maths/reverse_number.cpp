#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int number_count(int num)
{
    int count=0;
    while (num)
    {
        num=num/10;
        count++;
    }
    return count;
}
int main()
{
    int x;    //132
    cin>>x;
    int countDigit=number_count(x);   //3
    int new_number=0;
    while (x)
    {
        int rem;  //2
        rem=x%10;  
        new_number=new_number+rem*(int)pow(10,countDigit-1);
        countDigit--;
        x=x/10;
    }
    cout<<new_number<<endl;
    return 0;
}