#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0, input;

    bool arr[101] = { 0, };
    list<int> l;

    for (int i = 0; i < 9; i++)
    {
        cin >> input;
        sum += input;
        arr[input] = true;
        l.push_back(input);
    }

    sum -= 100;
    
    for (auto it = l.begin(); it != l.end(); it++)
    {
        int t = sum - *it;
        if(arr[t] && t != *it)
        {
            arr[t] = false;
            arr[*it] = false;
            break;
        }
    }

    for(int i = 0; i < 101; i++)
    {
        if(arr[i]) cout << i << '\n';
    }
}