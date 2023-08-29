#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    int min_ = min({x,y,z});
    int max_ = max({x,y,z});
    int t = x+y+z-min_-max_;

    cout << min_ << ' ' << t << ' '<< max_;
}