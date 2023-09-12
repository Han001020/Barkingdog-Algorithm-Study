#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;

    int K, input, sum = 0;
    cin >> K;
    
    while(K--)
    {
        cin >> input;
        if(input == 0)
            s.pop();
        else
            s.push(input);
    }


    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;
    
}