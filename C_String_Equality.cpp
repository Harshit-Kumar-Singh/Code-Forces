#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m;
    bool dp[s1.length()];
    for (int i = 0; i < s1.length(); i++)
    {
        dp[i] = false;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        m[s1[i]]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (m[s2[i]] >= 1)
        {
            dp[i] = true;
            m[s1[i]]--;
        }
    }
    for(int i=0;i<s1.length();i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] == 0)
        {
            string str1 = "";
            string str2 = "";
            for (int j = 0; j < k; j++)
            {
                if (dp[j] == 1)
                {
                    cout << "No" << endl;
                    return;
                }
                str1 += s1[j];
                str2 += s2[j];
            }
            for (int k = 0; k < str1.length() - 1; k++)
            {
                if (str1[k] != str1[k + 1] || str2[k] != str2[k + 1])
                {
                    cout << "No" << endl;
                    return;
                }
            }
            if(str1>str2){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
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