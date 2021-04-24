#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    if(m['M']*2 != m['T'])
    {
        cout<<"NO"<<endl;
        return;
    }
    ll countT = 0;
    ll countM = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='M')
        {
            countM++;
            
            if(countT!=countM)
            {
                cout<<"NO"<<endl;
                return;
            }
            countT--;
        }
        else {
            countT++;
        }
    }
    cout<<"YES"<<endl;
    return;
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