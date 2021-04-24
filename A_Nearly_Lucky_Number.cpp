#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    ll c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' or s[i] == '7')
        {
            c++;
        }
    }
    string str = to_string(c);
    ll final_count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='4' or str[i]=='7'){
            final_count++;
        }
    }
    if(final_count==str.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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