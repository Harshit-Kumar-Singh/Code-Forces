#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(ll a, ll b)
{
    return a > b;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    
    if (n % 2 != 0)
    {
        sort(v.begin(), v.end());
        ll ans = v[0]*v[0];
        for (int i = 2; i < n; i += 2)
        {
            
            ans += ((v[i] * v[i]) - (v[i -1] * v[i - 1]));
        }
        double final_ans = ans * 3.1415926536;

        printf("%.10f", final_ans);
    }
    else
    {
        sort(v.begin(), v.end(), compare);
        ll ans = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            ans += ((v[i] * v[i]) - (v[i + 1] * v[i + 1]));
        }
        double final_ans = ans * 3.1415926536;

        printf("%.10f", final_ans);
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