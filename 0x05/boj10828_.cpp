#include <bits/stdc++.h>
using namespace std;

const int MX = 10000;
int dat[MX];
int pos = 0;

void push(int x)
{
    dat[pos++] = x;
}

int pop()
{
    if (pos == 0)
        return -1;
    return dat[--pos];
}

int top()
{
    if (pos == 0)
        return -1;
    return dat[pos - 1];
}

int size()
{
    return pos;
}

int empty()
{
    return !static_cast<bool>(pos);
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
            push(x);
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
            cout << size() << '\n';
        }
        else if (input == "empty")
        {
            cout << empty() << '\n';
        }
    }
}