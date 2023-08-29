#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    int arr[3] = {x, y, z};
    sort(arr, arr + 3);
    for (auto &i : arr)
        cout << i << ' ';
}