#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll i)
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    map<ll, ll> final_map;
    for (int i = 0; i < m; i++)
    {
        map<ll, ll> old_map;
        ll x;
        cin >> x;
        ll min_ele = INT_MAX;
        bool check = false;
        for (int j = 0; j < x; j++)
        {
            ll ele;
            cin >> ele;
            old_map[ele]++;
            if (check == false)
            {
                if (final_map.find(ele) == final_map.end())
                {
                    final_map[ele]++;
                    check = true;
                }
            }
            else{
                if(old_map[ele])
            }
        }
        final_map[min_ele] = 1;
        v.push_back(min_ele);
    }
    map<ll, ll> new_map;
    for (int i = 0; i < v.size(); i++)
    {
        new_map[v[i]]++;
    }
    /*for(auto x:new_map){
        if(x.second>m/2){
            cout<<"NO"<<endl;
            return;
        }
    }*/
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve(i);
    }
}