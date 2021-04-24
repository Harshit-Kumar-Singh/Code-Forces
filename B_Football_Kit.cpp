#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll x[n];
    ll y[n];
    ll N=100001;
    ll count[N] = {0};
    for (int i = 0; i <=N; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
       cin>>x[i]>>y[i];
       count[x[i]]++;
    }
    ll ans_home[n];
    ll ans_away[n];
    for (int i = 0; i < n; i++)
    {
        ans_home[i] = n-1;
        ans_home[i] +=count[y[i]];
        ans_away[i] =(2*(n-1))-ans_home[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans_home[i]<<" "<<ans_away[i]<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}