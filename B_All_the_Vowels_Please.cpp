#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n;
    cin >> n;
    if (sqrt(n)<5 || n%2!=0)
    {
        cout << -1 << endl;
        return;
    }
   
    ll M = ceil(sqrt(n));
    ll N = floor(sqrt(n));
    if(M*N!=n){
        cout<<-1<<endl;
        return;
    }
    char ch[N][M];
    for (int i = 0; i < N; i++)
    {
        for(int j=0;j<M;j++){
            ch[i][j]='x';
        }

    }
    string s ="aeiou";
    for (int i = 0; i < N; i++)
    {
        int k=0;
       
        for(int j=i;j<M;j++){
            if(k>=s.length())
                break;
            ch[i][j]=s[k];
            
            k++;
        }
        for(int l=0;l<i;l++){
            if(k>=s.length())
                break;
            ch[i][l] = s[k];
            k++;
        }
    }
    ll k=0;
    for(int i=0;i<N;i++){
        if(k>=s.length())
                break;
        for(int j=0;j<M;j++){
            if(ch[i][j]=='x' ){
                ch[i][j] = s[k];
            }
        }
        k++;
    }
    for (int i = 0; i < N; i++)
    {
        for(int j=0;j<M;j++){
            cout<<ch[i][j];
        }
     //  cout<<endl;

    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}