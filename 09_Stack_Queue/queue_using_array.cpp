#include<iostream>
using namespace std;
class Queue{
    int start,end,*arr,size,currnt_size;
    public:
        Queue()
        {
            start=-1;
            end=-1;
            size=4;
            currnt_size=0;
            arr=new int [size];
        }
        void push(int x)
        {
            if (currnt_size == size) {
                cout << "Not enough space" << endl;
                return;
            }
            if(start==-1)
            {
                start=0;
            }
            end=(end+1)%size;
            arr[end]=x;
            currnt_size++;
        }
        void pop()
        {
            if(currnt_size==0)
            {
                cout<<"No element for pop"<<endl;
            }
            start++;
            currnt_size--;
        }
        void display() {
        if (currnt_size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = start;
        for (int count = 0; count < currnt_size; count++) {
            cout << arr[i] << " ";
            i = (i + 1) % size; // Circular increment
        }
        cout << endl;
        }
        void curr()
        {
            cout<<currnt_size<<endl;
        }
        ~Queue() {
        delete[] arr;
        }
};
int main()
{
    Queue q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    q.curr();
    q.push(100);
    q.display();
    cout<<endl;
    return 0;
}