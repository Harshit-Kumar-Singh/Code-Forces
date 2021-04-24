#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first < p2.first;
}
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll a1[k], a2[k];
    for (int i = 0; i < k; i++)
        cin >> a1[i];
    for (int i = 0; i < k; i++)
        cin >> a2[i];
    vector<ll> sum;
    set<ll> s;
    for (int i = 0; i < k; i++)
    {
        sum.push_back(a1[i] + a2[i]);
        s.insert(a1[i] + a2[i]);
    }
    sort(sum.begin(), sum.end());
    bool check[k] = {false};
    ll count = 0;
    for (int i = 0; i < k - 1;)
    {
        if (sum[i] == sum[i + 1])
        {
            if (a1[i] != a2[i])
            {
                count++;
                i += 2;

                continue;
            }
        }
        i++;
    }
    cout<<count+s.size()<<endl;
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