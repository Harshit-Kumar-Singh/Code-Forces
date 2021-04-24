#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

void solve()
{
    string s;
    ll m;
    cin >> s >> m;
    //cout << s << " " << s2 << endl;
    char ch = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        ch = max(ch, s[i]);
    }
    ll base = int(ch - '0');
    base = base+1;
    bool check = true;
   ll count=0;
    while (check)
    {
        ll ans =0;
        ll p = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
           
            ll d = int(s[i]-'0');
            ll n =(d*pow(base,p));
            cout<<pow(base,p)<<endl;
            ans  = ans+n;
            p++;
        }
        base++;
        //cout<<ans<<" "<<m<<endl;
        if(ans > m){
            break;
        }
        count++;
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