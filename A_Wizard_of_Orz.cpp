#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    string s = "989";
    string str = "0123456789";
    if (n <= s.length())
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    else
    {
        cout<<s;
        for(int i=0;i<n-s.length();i++){
            cout<<str[i%str.length()];
        }
        cout<<endl;
    }
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