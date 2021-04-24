#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    map<ll, ll> m1;
    map<ll, ll> m2;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        m1[x]++;
        if (m1[x] <= 2)
        {

            m2[x] = abs(m[x] - i);
            m[x] = i;
        }
        else
        {
            if (abs(m[x] - i) != m2[x])
            {
                m2[x] = -1;
            }
            m[x] = i;
        }
    }
   
    map<ll, ll> ans;
    for (int i = 0; i < n; i++)
    {
        if (m1[v[i]] == 1)
        {
            ans[v[i]] = 0;
        }
        else if (m2[v[i]] == -1)
        {
            continue;
        }
        else
        {
            ans[v[i]] = m2[v[i]];
        }
    }
    // sort(vec.begin(),vec.end());
    if (ans.empty() == true)
    {
        cout << 0 << endl;
        return;
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }

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