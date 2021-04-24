#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll a[3][3] ;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=1;
        }
        //cout<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ll x;
            cin >> x;
            //cout<<x<<"  ";
            if (x & 1)
            {
                //cout<<x<< " " ;
                a[i][j] = !(a[i][j]);
                if (j + 1 < 3)
                {
                    a[i][j + 1] = !(a[i][j + 1]);
                }
                if (j - 1 >= 0)
                {
                    a[i][j - 1] = !(a[i][j - 1]);
                }
                if (i + 1 < 3)
                {
                    a[i + 1][j] = !(a[i + 1][j]);
                }
                if (i - 1 >= 0)
                {
                    a[i - 1][j] = !(a[i - 1][j]);
                }
            }
            else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
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