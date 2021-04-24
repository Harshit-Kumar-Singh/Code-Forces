#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &arr)
{
    set<int> s;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            count++;
        s.insert(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            continue;
        int no1 = 2 * arr[i];
        if (s.find(no1) != s.end())
        {
            return true;
        }
        if (arr[i] % 2 == 0)
        {
            if (s.find(arr[i] / 2) != s.end())
                return true;
        }
    }
    if (count % 2 == 0 and count > 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    if (check(arr))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}