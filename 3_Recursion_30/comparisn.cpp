//! Head & Tail...

#include <iostream>
using namespace std;

int cnt = 0;
int i = 4;

void printTail()
{
    if (cnt >= i)
        return;
    cnt++;
    printTail();
    cout << "Arindam";
}
void printHead()
{
    if (cnt >= i)
        return;
    printHead();
    cnt++;
    cout << "Arindam";
}

int main()
{
    printTail();
}
