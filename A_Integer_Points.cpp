#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll count_even1=0;
    ll count_odd1=0;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        if(x&1)
            count_odd1++;
        else 
            count_even1++;   
    }
    ll m;
    cin >> m;
    ll count_even2=0;
    ll count_odd2=0;
    for(int i=0;i<m;i++){
        ll x;
        cin >> x;
        if(x&1)
            count_odd2++;
        else 
            count_even2++;   
    }
    cout<<count_even1*count_even2 + count_odd1*count_odd2<<endl;

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