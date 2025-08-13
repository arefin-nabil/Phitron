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

// void traverse_right(Node *root)
// {
//     if (root != NULL)
//     {
//         cout << root->val << " ";
//     }

//     while (root != NULL)
//     {
//         if (root->right)
//         {
//             root = root->right;
//         }
//         else
//         {
//             root = root->left;
//         }
//         cout << root->val << endl;
//     }
// }

void preorder(Node *root)
{
    if (root == NULL)
        return;
    // preorder(root->left);
    //  preorder(root->right);

    if (root->left)
        preorder(root->left);
    else if (root->right)
        preorder(root->right);

    cout << root->val << " ";
}

void preorder2(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right)
        preorder2(root->right);
    else if (root->left)
        preorder2(root->left);
}

// void traverse_left(Node *root)
// {
//     if (root != NULL)
//     {
//         cout << root->val << " ";
//     }
//     while (root != NULL)
//     {
//         if (root->left)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//         cout << root->val << " ";
//     }
// }

int main()
{
    Node *root = input_tree();
    // traverse_left(root);
    // traverse_right(root);
    // preorder(root);
    // preorder2(root);
    preorder(root->left);
    cout << root->val << " ";
    preorder2(root->right);

    return 0;
}