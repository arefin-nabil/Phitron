#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *mleft, *mright;
        if (l == -1)
            mleft = NULL;
        else
            mleft = new Node(l);
        if (r == -1)
            mright = NULL;
        else
            mright = new Node(r);

        p->left = mleft;
        p->right = mright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level(Node *root, int n)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    vector<int> nums;

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();
        Node *node = f.first;
        int lvl = f.second;

        if (lvl == n)
            nums.push_back(node->val);

        if (node->left)
            q.push({node->left, lvl + 1});
        if (node->right)
            q.push({node->right, lvl + 1});
    }

    if (nums.empty())
        cout << "Invalid\n";
    else
    {
        for (int v : nums)
            cout << v << " ";
    }
}

int main()
{
    Node *root = input_tree();
    int n;
    cin >> n;
    level(root, n);
    return 0;
}
