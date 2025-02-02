#include <iostream>
using namespace std;
int top = -1;
void push(int arr[],int n,int data) //n=10
{
    if (top >= n-1)
    {
        cout << "Stack Full" << endl;
    }
    else
    {
        arr[++top] = data;
    }
}
void pop(int arr[],int n)
{
    if(top==-1)
    {
        cout<<"Stack empty "<<endl;
    }
    else{
        cout<<"Poped element "<<arr[top]<<endl;
        top--;
    }
}
int peek(int arr[],int n)
{
    if(top>-1 && top<n-1)
    {
        return top;
    }
    else{
        return 0;
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    push(arr,size,12);
    display(arr,size);
    cout << endl;
    return 0;
}