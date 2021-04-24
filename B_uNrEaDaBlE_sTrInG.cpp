#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
   string s;
   cin >> s;
   for(int i=0;i<s.length();i+=2){
       if(isupper(s[i]))
        {
            cout<<"No"<<endl;
            return;
        }
   }
   for(int i=1;i<s.length();i+=2){
       if(islower(s[i]))
        {
            cout<<"No"<<endl;
            return;
        }
   }
   cout<<"Yes"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        solve();
    
    return 0;
}