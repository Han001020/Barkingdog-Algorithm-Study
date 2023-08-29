#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    string s;

    cin >> TC;

    while (TC--)
    {
        cin >> s;
        list<char> password;
        password.clear();
        auto cursor = password.end();

        for (const auto &c : s)
        {
            switch (c)
            {
            case '<':
                if (cursor != password.begin())
                    cursor--;
                break;

            case '>':
                if (cursor != password.end())
                    cursor++;
                break;

            case '-':
                if (cursor != password.begin())
                    cursor = password.erase(--cursor);
                break;

            default:
                password.insert(cursor, c);
                break;
            }
        }

        for (const auto &p : password)
        {
            cout << p;
        }
        cout << '\n';
    }
}