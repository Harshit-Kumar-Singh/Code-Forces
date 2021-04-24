#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
bool comparator1(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.first % 2 == 0 and (p2.first) % 2 != 0)
    {
        return p1 > p2;
    }
    return p1.first < p2.first;
}
bool comparator2(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.first % 2 != 0 and (p2.first) % 2 == 0)
    {
        return p1 > p2;
    }
    else
    {
        return p1.first < p2.first;
    }
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<ll, ll>> v1;
    vector<pair<ll, ll>> v2;
    for (int i = 0; i < n; i++)
    {
        ll x = ll(s[i] - '0');
        if ((i + 1) % 2 != 0)
        {
            v1.push_back(make_pair(x, i + 1));
        }
        else
        {
            v2.push_back(make_pair(x, i + 1));
        }
    }
    sort(v1.begin(), v1.end(), comparator1);
    sort(v2.begin(), v2.end(), comparator2);
   /* for (auto it : v1)
    {
        cout << it.first << "," << it.second << endl;
    }
    cout << endl;
    for (auto it : v2)
    {
        cout << it.first << "," << it.second << endl;
    }
    cout << endl;*/
    if (n % 2 == 0)
    {
        if (v2[v2.size() - 1].first % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
        if (v1[v1.size() - 1].first % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1<< endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}