#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int arr[26] = {0};

    for (const auto &c : s)
        arr[c - 'a']++;
    for (const auto &i : arr)
        cout << i << ' ';
}