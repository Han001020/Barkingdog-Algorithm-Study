#include <bits/stdc++.h>
using namespace std;

const int MX = 10005;
int dat[MX];
int head = 0, tail = 0;

int empty()
{
    return head == tail;
}

void push(int x)
{
    dat[tail++] = x;
}

int pop()
{
    int result = -1;
    if (!empty())
    {
        result = dat[head];
        head++;
    }
    return result;
}

int size()
{
    return tail - head;
}

int front()
{
    int result = -1;
    if (!empty())
        result = dat[head];
    return result;
}

int back()
{
    int result = -1;
    if (!empty())
        result = dat[tail - 1];
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
            push(x);
        }
        else if (input == "pop")
        {
            cout << pop() << '\n';
        }
        else if (input == "size")
        {
            cout << size() << '\n';
        }
        else if (input == "empty")
        {
            cout << empty() << '\n';
        }
        else if (input == "front")
        {
            cout << front() << '\n';
        }
        else if (input == "back")
        {
            cout << back() << '\n';
        }
    }
}