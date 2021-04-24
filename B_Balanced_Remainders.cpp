#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll k = n / 3;
    ll count0=0;
    ll count1=0;
    ll count2=0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        ll r = x%3;
        if(r==0)
            count0++;
        else if(r==1)
            count1++;
        else if(r==2)
            count2++;
    }
    ll ans=0;
    //cout<<count0<<" "<<count1<<" "<<count2<<endl;
    if(count0<k){
        while(count0<k and count1>k){
            ans+=2;
            count0++;
            count1--;
        }
        while(count0<k and count2>k){
            ans++;
            count0++;
            count2--;
        }
    }
    if(count1<k){
        while(count1<k and count0>k){
            ans+=1;
            count1++;
            count0--;
        }
        while(count1<k and count2>k){
            ans+=2;
            count1++;
            count2--;
        }
        
    }
    if(count2<k){
        while(count2<k and count0>k){
            ans+=2;
            count2++;
            count0--;
        }
        while(count2<k and count1>k){
            ans+=1;
            count2++;
            count1--;
        }
    }
    cout<<ans<<endl;
    
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