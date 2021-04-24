#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(ll a, ll b)
{
    return b > a;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), compare);
    ll ans1 = 0;
    ll max_ele = INT_MIN;
    ll idx1 = -1;
    for (int i = 0; i < m; i++)
    {
        if (n <= 0)
            break;
        for (int j = 0; j < m; j++)
        {
            
            if (v[j] >= max_ele)
            {
                max_ele = v[j];
                idx1 = i;
            }
        }
        cout<<max_ele<<" "<<idx1<<endl;
        ans1 += max_ele;
        n--;
        v[idx1] = v[idx1] - 1;
    }
    cout << ans1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}