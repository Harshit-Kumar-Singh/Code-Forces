#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll x;
    vector<ll> v;
    bool check = true;
    for (int i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        
    }
    sort(v.begin(),v.end());
    ll sum1 =0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=v[i];
    }
     for(int i=n;i<2*n;i++){
        sum2+=v[i];
    }
    if(sum1==sum2){
        cout<<-1<<endl;

    }
    else{
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();

    return 0;
}