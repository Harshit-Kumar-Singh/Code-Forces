#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> v;
    for (int i = 0; i < m + 1; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    bitset<20> f(v[v.size() - 1]);
    ll final_ans = 0;

    for (auto x : v)
    {
        ll count = 0;
        bitset<20> b(x);
        for (int i = 0; i < f.size(); i++)
        {
            ll no1 =f.test(i);
            ll no2 = b.test(i);
            cout<<no1<<" "<<no2<<endl;
            if(no1!=no2){
                count++;
            }
        }
        cout<<count<<" ";
        if(count<=k){
            final_ans++;
        }
    }
    cout<<final_ans-1<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //ll test;
    //cin >> test;
    //while (test--)
    //{
    solve();
    //}
    return 0;
}