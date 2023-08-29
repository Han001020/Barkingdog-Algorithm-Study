#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input, min = INT_MAX, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> input;
        if (input & 1)
        {
            sum += input;
            if (input < min) min = input;
        }
    }
    if(sum) cout << sum << ' ' << min;
    else cout << -1;
}