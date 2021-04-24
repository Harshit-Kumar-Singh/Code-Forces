#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++){
        if(str1[i]==str2[i]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
    cout<<endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //ll test;
    //cin >> test;
    //while (test--)
    //{
        solve();
    //}
    return 0;
}