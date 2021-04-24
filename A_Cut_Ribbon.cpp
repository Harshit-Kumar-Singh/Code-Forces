#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll arr[3] = {a, b, c};
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    int i = 0;
    while (n <= 0)
    {
        if (s.find(n - arr[i]) != s.end())
        {
            
        }
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
