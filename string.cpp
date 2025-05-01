#include<iostream>
#include<string.h>
using namespace std;

// int main()
// {
//     int t;
//     cin>> t;
//     cin.ignore(); // for ignore the backslash n
//     while(t--)
//     {
//         string s;
//         getline(cin,s);
//         cout<<s<<endl;
//     }
// }


//! String reverse  && Palindrome

// int main()
// {
//     string s;
//     cin>>s;
//     int num=s.size();
//     string str;
//     for(int i=num-1;i>=0;i--)
//     {
//         str.push_back(s[i]);
//     }
//     cout<<str<<endl;
//     if(s==str)
//     {
//         cout<<"YES";
//     }
//     else{
//         cout<<"No";
//     }
// }

//! String input long && Char convert into integer

int main()
{
    string s;
    cin>>s;
    cout<<(int)s[4]-'0';  //? To convert the char into integer with substract o the asciii of '0' 
}