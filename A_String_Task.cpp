#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    string s;
    cin >> s;
    string str = "";
    string vowel ="AEIOUaeiouYy";
    
    for (int i = 0; i < s.length(); i++)
    {
        ll check = true;
        for(int j=0;j<vowel.length();j++){
            if(s[i]==vowel[j]){
                check = false;
            }
        }
        if(check==false)  continue;
        else if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
        str+='.';
        str+=s[i];
    }
    cout<<str<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}