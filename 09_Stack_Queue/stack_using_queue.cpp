#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int> q;
    public:
        void push (int x)
        {
            int s=q.size();
            if(s==0)
            {
                q.push(x);
            }
            else
            {
                q.push(x);
                for (int i=0;i<s;i++)
                {
                    q.push(q.front());
                    q.pop();
                }
            }
        }
        void pop()
        {
            if(!q.empty()){
                q.pop();
            }
            else{
                cout<<"No element for poping";
            }
        }
        void display() {
        queue<int> temp = q; // Create a copy of queue
        
        while (!temp.empty()) {
            cout << temp.front() << "->";
            temp.pop();
        }
        cout << endl;
        }
};
int main()
{
    Stack s;
    s.push(12);
    s.push(2);
    s.push(120);
    s.display();
    s.pop();
    s.display();
    cout<<endl;
    return 0;
}