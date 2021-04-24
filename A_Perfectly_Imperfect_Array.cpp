#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        //cout<<x<<" ";
        if(ceil((double)sqrt(x)) != floor((double)sqrt(x)))
        {
            ans = true;
        }
        else{
           continue;
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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