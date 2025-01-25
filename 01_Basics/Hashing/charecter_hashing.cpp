#include<iostream>
using namespace std;
int main()
{
    // Takes the input
    char arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    //Pre Computing
    int hash[26]={0};  //! set the hash size 256...
    for(int i=0;i<10;i++)
    {
        hash[arr[i]-'a']++;   //! hash[arr[i]] -> same it auto cast from char to int...
    }
    //Check
    char x;
    cin>>x;
    cout<<hash[x-'a']<<endl;
    return 0;
    // vector<int>x;
    // x={12,23,34};
    // for(auto i:x)
    // {
    //     cout<<i<<" ";
    // }
}