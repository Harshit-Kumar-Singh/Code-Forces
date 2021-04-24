#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll ans =0;
    while(n--){
        string s;
        cin >> s;
        if(s[0]=='+' or s[2]=='+')
            ans++;
        else
            ans--;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}