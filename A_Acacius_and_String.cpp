#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string removeWord(string str, string word)
{
    if (str.find(word) != string::npos)
    {
        size_t p = -1;
        string tempWord = word + " ";
        while ((p = str.find(word)) != string::npos)
            str.replace(p, tempWord.length(), "");
        tempWord = " " + word;
        while ((p = str.find(word)) != string::npos)
            str.replace(p, tempWord.length(), "");
    }
    return str;
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string str = "abacaba";
    size_t found = s.find(str);
    if (found != string::npos)
    {
        s = removeWord(s, str);
        size_t found = s.find(str);
        if (found != string::npos)
        {
            cout<<"No"<<endl;
        }
    }
    else
        cout << "NotFound" << endl;
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