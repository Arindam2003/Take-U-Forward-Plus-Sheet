#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1, 1, 1, 2, 3, 2, 2, 2, 4, 2};

    int cnt1 = 0,cnt2=0; 
    int elem1,elem2;    
    for (int i = 0; i < 10; i++)
    {
        if (cnt1 == 0 && arr[i]!=elem2)
        {
            cnt1++;
            elem1 = arr[i];
        }
        else if(cnt2 == 0 && arr[i]!=elem1)
        {
            cnt2++;
            elem2 = arr[i];
        }
        else if (elem1 == arr[i])
        {
            cnt1++;
        }
        else if(elem2==arr[i])
        {
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    int main_count1 = 0;
    int main_count2 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (elem1 == arr[i])
        {
            main_count1++;
        }
        else if(elem2==arr[i])
        {
            main_count2++;
        }
    }
    cout << elem1 << " " << main_count1 << endl;
    cout << elem2 << " " << main_count2 << endl;
    return 0;
}