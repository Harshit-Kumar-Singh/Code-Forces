#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll min_ele = INT_MAX;
    ll max_ele = INT_MIN;
    ll idx_min = -1;
    ll idx_max = -1;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (x <= min_ele)
        {
            min_ele = x;
            idx_min = i;
        }
    }
    ll count = 0;
    for (int i = idx_min; i < n - 1; i++)
    {
        swap(v[i], v[i + 1]);
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max_ele)
        {
            max_ele = v[i];
            idx_max = i;
        }
    }
    ll count2=0;
    for (int i = idx_max; i >= 1; i--)
    {
        swap(v[i],v[i-1]);
        count2++;
    }
    
    cout<<count2+count<<endl;
}