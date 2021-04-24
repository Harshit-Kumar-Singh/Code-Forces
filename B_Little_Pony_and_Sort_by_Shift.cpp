#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isSorted(vector<ll> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool isSortedD(vector<ll> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            return false;
        }
    }
    return true;
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

    if (isSorted(v))
    {
        cout << 0 << endl;
        return;
    }
    else if (isSortedD(v))
    {
        if (n == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        bool check = true;
        ll idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > v[i + 1])
            {
                idx = i + 1;
                break;
            }
        }
      //  cout<<idx<<endl;
        for(int i=idx;i<n-1;i++){
            if(v[i]>v[i+1]){
                cout<<-1<<endl;
                return;
            }
        }
        if(v[n-1]<=v[0]){
            cout<<abs(idx-n)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
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