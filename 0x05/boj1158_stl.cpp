#include <bits/stdc++.h>
using namespace std;

    stack<int> s;

int pop()
{
    int result = -1;
    if(!s.empty())
    {
        result = s.top();
        s.pop();
    }
    return result;
}

int top()
{
    int result = -1;
    if(!s.empty())
    {
        result = s.top();
    }
    return result;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    int N, x;
    string input;
    cin >> N;
    while (N--)
    {
        cin >> input;
        if (input == "push")
        {
            cin >> x;
            s.push(x);
        }
        else if (input == "pop")
        {        
            cout << pop() << '\n';
        }
        else if (input == "top")
        {
            cout << top() << '\n';
        }
        else if (input == "size")
        {
            cout << s.size() << '\n';
        }
        else if (input == "empty")
        {
            cout << s.empty() << '\n';
        }
    }
}