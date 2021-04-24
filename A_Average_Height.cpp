#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
        ll n;
        cin >> n;
        vector <ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            if(it%2!=0)
            {
                cout<<it<<" ";
            }
        }
        for(auto it:v)
        {
            if(it%2==0)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;
        
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