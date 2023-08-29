#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;

    cin >> x >> y >> z;
    if (x < y && x < z)
    {
        cout << x << ' ';
        if (y < z)
        {
            cout << y << ' ' << z;
        }
        else
        {
            cout << z << ' ' << y;
        }
    }
    else if (y < z)
    {
        cout << y << ' ';
        if (x < z)
        {
            cout << x << ' ' << z;
        }
        else
        {
            cout << z << ' ' << x;
        }
    }
    else
    {
        cout << z << ' ';
        if (y < x)
        {
            cout << y << ' ' << x;
        }
        else
        {
            cout << x << ' ' << y;
        }
    }
}