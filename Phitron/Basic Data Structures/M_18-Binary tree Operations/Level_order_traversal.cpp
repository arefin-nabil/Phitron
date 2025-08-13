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

void level_traversal(Node* root)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. queue theke root ber kore anbo
        Node *n = q.front();
        q.pop();

        // 2. kaj krbo / print

        cout << n->val << " ";

        // 3. childrens der queue te push krbo
        if(n->left)
            q.push(n->left);
        if(n->right)
            q.push(n->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    cout << "Level Order Traversal : ";
    level_traversal(root);

    return 0;
}