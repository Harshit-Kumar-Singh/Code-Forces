#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    map<int, int> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
        m[x]++;
    }
    int ans = 0;
    ll count=0;
    ll ans2 =0;
    for (int i = 0; i < n; i++)
    {
        bool check= true;
        for (int j = 1; j < 31; j++)
        {

            int key = pow(2, j);
            int k = key - arr[i];
            cout<<k<<" "<<arr[i]<<endl;
            if(m.find(k)!=m.end()){
                check = false;
                break;
            }
        }
        if(check = true){
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}