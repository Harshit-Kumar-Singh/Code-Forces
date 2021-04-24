#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> m;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    //cout<<endl;
    for(auto x:m){
        if(m[x.first]%k!=0){
            cout<<-1<<endl;
            return;
        }
        else{
            m[x.first] = m[x.first]/k;
        }
    }
    for (auto p : m)
    {
        for (int j = 0; j < p.second; j++)
        {
            str += p.first;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << str;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}