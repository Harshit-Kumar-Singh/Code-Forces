#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first < p2.first;
}
void solve()
{
    ll s, n;
    cin >> s >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(),compare);
    for(int i=0;i<n;i++)
    {
        if(s<=v[i].first){
            cout<<"NO"<<endl;
            return;
        }
        s +=v[i].second;
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}