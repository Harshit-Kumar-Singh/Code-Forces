#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    unordered_map<char,ll> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    ll count = 0;
    for (auto x : m)
    {
        if (x.second & 1)
        {
            count++;
        }
    }
    if(count<=1){
        cout<<"First"<<endl;
        return;
    }
    if (count % 2 == 0)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
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