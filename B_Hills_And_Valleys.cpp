#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool areSame(ll arr[], ll n)
{
    ll first = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] != first)
            return 0;
    return 1;
}
bool arraySortedOrNot(ll arr[], ll n)
{

    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}
ll arrayReverse(ll arr[], ll n)
{
    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
            return false;
    }
    return true;
}
void solve()

{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (areSame(arr, n))
    {
        cout << 0 << endl;
        return;
    }
    else if (arrayReverse(arr, n))
    {
        cout << 0 << endl;
        return;
    }
    else if (arraySortedOrNot(arr, n))
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll final_ans = INT_MAX;
        ll temp[n] ;
        for (int i = 1; i < n - 1; i++)
        {
            for(int i=0;i<n;i++){
                temp[i] = arr[i];
            }
            if ((arr[i] < arr[i - 1] and arr[i] < arr[i + 1])or((arr[i] > arr[i - 1] and arr[i] > arr[i + 1])))
            {
                ll sum=0;
                temp[i + 1] = temp[i];
                for (int j = 1; j < n-1; j++)
                {
                    if (temp[i] < temp[i - 1] and temp[i] < temp[i + 1])
                    {
                        sum++;
                    }
                    else if (temp[i] > temp[i - 1] and temp[i] > temp[i + 1])
                    {
                        sum++;
                    }
                }
                final_ans = min(final_ans,sum);
                
            }
    
            
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<"  ";
        cout<<endl;
        cout<<final_ans<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
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