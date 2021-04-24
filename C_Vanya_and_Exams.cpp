#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p2.second == p1.second)
    {
        return p1.first < p2.first;
    }
    return p1.second < p2.second;
}

void solve()
{
    ll n, r, avg;
    ll sum = 0;
    cin >> n >> r >> avg;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        sum += x;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);
    ll ans = 0;
    ll first = -1;
    ll second = -1;

    for (auto x : v)
    {
        float check = ((sum * 1.0) / n);
        if (check >= avg)
        {
            first = x.first;
            second = x.second;
            break;
        }
        ll m ;
        if(x.first>=r)
            m = (x.first - r);
        else
            m =(r-x.first);
        sum += m;
        ans += m * x.second;
    }
    
   
    
    if (ans == 0)
    {
        cout << 0 << endl;
        return;
    }
     long double check = ((sum * 1.0) / n);
    while (check > avg)
    {
        sum = sum - 1;
        ans = ans - second;
        check = ((sum * 1.0) / n);
    }
    if ((sum / n) < avg)
    {
        sum++;
        ans += second;
    }
    cout <<to_string( ans) << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}