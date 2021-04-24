#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll count =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            if(x==0){
                count++;
            }
        }
    }
    if(count&1){
        cout<<"Ashish"<<endl;
    }
    else{
        cout<<"Vivek"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
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