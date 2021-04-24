#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Node
{
public:
    int data;
    vector<Node *> child;
    Node(int d)
    {
        data = d;
    }
};
void PrintBfs(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int n = q.size();
        while (n > 0)
        {
            Node *f = q.front();
            q.pop();
            cout << f->data << " ";
            cout<<endl;
            for (int i = 0; i < f->child.size(); i++)
            {
                q.push(f->child[i]);
            }
            n--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *root = new Node(arr[0]);
    (root->child).push_back(new Node(arr[1]));
    (root->child).push_back(new Node(arr[2]));
    (root->child).push_back(new Node(arr[3]));
    PrintBfs(root);
}
