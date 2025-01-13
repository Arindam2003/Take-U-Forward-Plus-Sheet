#include<iostream>
using namespace std;

//pass by value...

void f1(int number)
{
    cout<<number<<endl;
    number=number+10;
    cout<<number<<endl;
    number =number+10;
    cout<<number<<endl;
}


//Pass by reference
void f2(string &s)
{
    s[0] ='k';
    cout<<s<<endl;
}

void f3(int arr[])  //array is normally passing by value without reference variable...
{
    for (int i = 0; i < 5; i++)
    {
        arr[i]=arr[i]+5;
    }
    
}

int main()
{
    // string s="Arindam";
    // f1(x);
    // f2(s);
    int arr[5];
    cout<<"Enter 5 number"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    f3(arr);
    cout<<"From Main Function->"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}