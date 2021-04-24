#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n,u,v;
    cin >> n >> u >> v;
    ll arr[n];
    bool isSame = true;
    bool isDif = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(abs(arr[i]-arr[i+1])>1)
            isDif = true;
        if(arr[i]!=arr[i+1])
            isSame = false;
    }
    if(isDif){
        cout<<0<<endl;
        return;
    }
    if(isSame){
        cout<<min(u+v,v+v)<<endl;
        return;
    }
    cout<<min(u,v)<<endl;
    
    
    
    
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}