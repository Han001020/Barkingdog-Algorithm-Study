#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y;
    cin >> y;

    cout << (y % 4 == 0 && !(y % 100 == 0) || y % 400 == 0);

}