#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll n;
    cin >> n;
    ll sum =0;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin  >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        ll m = abs(v[i]-v[i+1]);
        if(m&1){
            cout<<"NO"<<endl;
            return;
        }
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