#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    vector<ll>::iterator low1, low2, low3;
    for (auto x : m)
    {
        if (x.second >= 3)
        {
            cout << "YES" << endl;
            return;
        }
        else if (x.second == 2)
        {
            ll idx1 =-1;
            ll idx2 =-1;
            for(int i=0;i<n;i++){
                if(v[i]==x.first){
                    idx1 =i;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(v[i]==x.first and i!=idx1){
                    idx2 =i;
                    break;
                }
            }
            //cout<<idx1<<" "<<idx2<<endl;
            if(abs(idx1-idx2)>1){
                cout<<"YES"<<endl;
                return;
            }
            
        }
    }
    cout<<"NO"<<endl;
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