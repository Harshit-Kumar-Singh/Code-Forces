#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second < p2.second;
}
void solve()
{
    ll A, h, n;
    cin >> A >> h >> n;
    vector<ll> a, b;
    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        sum1 += x;
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
        sum2 += x;
    }
    vector<pair<ll, ll>> p;
    for (int i = 0; i < n; i++)
    {
        p.push_back(make_pair(a[i], b[i]));
    }

    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        if(h<=0) {
            cout<<"NO"<<endl;
            return;
        }
        ll q1 = p[i].second / A;
        ll r1 = p[i].second % A;
        ll q2 = h / p[i].first;
        ll r2 = h % p[i].first;
        if (r1)q1++;
        if(r2)q2++;

        ll times = min(q1,q2);

        h = h - (p[i].first * times);
        p[i].second = p[i].second- (A * times);
    }

    if(p[n-1].second>0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}