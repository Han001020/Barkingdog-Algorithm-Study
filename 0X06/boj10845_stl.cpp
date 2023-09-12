#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;

    int N, x;
    string input;
    cin >> N;
    while (N--)
    {
        cin >> input;

        if (input == "push")
        {
            cin >> x;
            q.push(x);
        }
        else if (input == "pop")
        {
            cout << (q.empty() ? -1 : q.front()) << '\n';
            if(!q.empty()) q.pop();
        }
        else if (input == "size")
        {
            cout << q.size() << '\n';
        }
        else if (input == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (input == "front")
        {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        }
        else if (input == "back")
        {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        }
    }
}