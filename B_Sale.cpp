#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(ll a, ll b)
{
    return a > b;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            v.push_back(abs(arr[i]));
        }
    }
    sort(v.begin(), v.end(),compare);
    ll sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i >= k)
        {
            break;
        }
        sum+=v[i];
    }
    cout<<sum<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}