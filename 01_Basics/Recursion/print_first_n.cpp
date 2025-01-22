#include<iostream>
using namespace std;
void print(int n)
{
    if(n>0){
        print(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int x;
    cout<<"Enter number: ";
    cin>>x;
    print(x);
    cout<<endl;
    return 0;
}