#include <bits/stdc++.h>
using namespace std;

int func2(int a[], int n)
{
    int arr[100] = {};
    for (int i = 0; i < n; i++)
    {
        if (arr[100 - a[i]])
            return 1;
        arr[a[i]] = 1;
    }
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a1[] = {1, 52, 48};
    int a2[] = {50, 42};
    int a3[] = {4, 13, 63, 87};

    cout << func2(a1, 3) << '\n';
    cout << func2(a2, 2) << '\n';
    cout << func2(a3, 4) << '\n';
}