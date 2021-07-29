#include <bits/stdc++.h>
using namespace std;
class stacks
{
    queue<int> mainQ, helperQ;

public:
    void push(int x)
    {
       mainQ.push(x);
    }

    void pop()
    {
        if(mainQ.size()==0)
        {
            cout<<"Stack Underflow";
            return;
        }
        else{
            while(mainQ.size()>1){
                helperQ.push(mainQ.front());
                mainQ.pop();
            }
            int x=mainQ.front();
            cout<<x<<endl;
            mainQ.pop();
            while(helperQ.size()>0){
                mainQ.push(helperQ.front());
                helperQ.pop();
            }
        }
        
    }

    void top()
    {
        if(mainQ.size()==0)
        {
            cout<<"Stack Underflow";
            return;
        }
        else{
            while(mainQ.size()>1){
                helperQ.push(mainQ.front());
                mainQ.pop();
            }
            int x=mainQ.front();
            cout<<x<<endl;
            helperQ.push(x);
            mainQ.pop();
            while(helperQ.size()>0){
                mainQ.push(helperQ.front());
                helperQ.pop();
            }
        }
    }

    void size()
    {
        cout << mainQ.size() << "\n";
            return;
    }
};
int main()
{
    // 1 -> push
    // 2 - > pop
    // 3 -> size
    // 4 -> top
    // 5 - > min
    string s;
    stacks ob;
    while (cin >> s)
    {
        if (s == "push")
        {
            int x;
            cin >> x;
            ob.push(x);
        }

        else if (s == "top")
        {
            ob.top();
        }
        else if (s == "pop")
        {
            ob.pop();
        }
        else if (s == "size")
        {
            ob.size();
        }
        else if (s == "quit")
        {
            break;
        }
    }
}
