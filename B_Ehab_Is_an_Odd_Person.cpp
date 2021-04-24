#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll x;
    vector<ll> v;
    ll count1 =0,count2=0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if(x&1){
            count2++;
        }
        else{
            count1++;
        }
        
    }
    if(count1==v.size() || count2==v.size()){
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}