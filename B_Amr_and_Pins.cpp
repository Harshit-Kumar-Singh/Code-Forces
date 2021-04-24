#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    ll a = abs(x1-x2);
    ll b = abs(y2-y1);
    double distance = ceil(sqrt(pow(a,2)+pow(b,2)));
    ll diameter = r*2;
    cout<<ceil(distance/diameter)<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}