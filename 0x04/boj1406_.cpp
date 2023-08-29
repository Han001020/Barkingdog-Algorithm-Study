#include <bits/stdc++.h>
using namespace std;
const int MX = 10;
char dat[MX] = {-1};
int pre[MX] = {-1}, nxt[MX] = {-1};
int unused = 1;

void insert(int addr, int num)
{
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    nxt[pre[unused]] = unused;

    if (nxt[unused] != -1)
        pre[nxt[unused]] = unused;

    unused++;
}

void erase(int addr)
{
    dat[addr] = -1;
    nxt[pre[addr]] = nxt[addr];

    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

void traversal()
{
    int cur = nxt[0];
    while (cur != -1)
    {
        cout << dat[cur];
        cur = nxt[cur];
    }
    cout << "\n\n";
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int M;
    char c;
    cin >> s >> M;

    int cursor = 0;
    for (const auto &i : s)
    {
        insert(cursor, i);
        cursor++;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> c;
        switch (c)
        {
        case 'P':
            cin >> c;
            insert(cursor, c);
            cursor = nxt[cursor];
            break;

        case 'L':
            if (pre[cursor] != -1)
                cursor = pre[cursor];
            break;

        case 'D':
            if (nxt[cursor] != -1)
                cursor = nxt[cursor];
            break;

        case 'B':
            if (pre[cursor] != -1)
            {
                erase(cursor);
                cursor = pre[cursor];
            }
            break;
        }
    }

    traversal();
}