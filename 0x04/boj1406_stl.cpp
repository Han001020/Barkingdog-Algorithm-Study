#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int M;
    char c;
    cin >> s >> M;

    list<char> l;
    for (const auto &i : s)
    {
        l.push_back(i);
    }

    auto cursor = l.end();

    for (int i = 0; i < M; i++)
    {
        cin >> c;
        switch (c)
        {
        case 'P':
            cin >> c;
            l.insert(cursor, c);
            break;

        case 'L':
            if (cursor != l.begin())
                cursor--;
            break;

        case 'D':
            if (cursor != l.end())
                cursor++;
            break;

        case 'B':
            if (cursor != l.begin())
                cursor = l.erase(--cursor);
            break;
        }
    }

    for (const auto &i : l)
    {
        cout << i;
    }
}