#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    
        else{
            arr[i] = 0;
        }
    }

    for (int i = n-1; i >=0; i--)
    {
        if(arr[i]!=0){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout << endl;
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