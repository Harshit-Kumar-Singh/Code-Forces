#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> vec;
    for (int i = 0; i < n; i++)
    {
        vector<ll> v;
        ll min_ele = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            
        }
        sort(v.begin(), v.end());
        if(i<m)
        {
            swap(min_ele,v[i]);
        }
        vec.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}