#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string r = "DCBAE";
    int count,input;
    for(int i = 0; i < 3; i++)
    {
        count = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >>input;
            count += input;
        }
        cout << r[count] << '\n';
    }
}