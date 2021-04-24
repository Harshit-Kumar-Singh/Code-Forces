#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    ll n,k;
    cin >> n >> k;
    cin >> s;
    ll count=0;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            count++;
        }
    }
    cout<<count<<endl;
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