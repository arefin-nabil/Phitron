#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int max_here(Node *head)
{
    int max = 0;

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}

int min_here(Node *head)
{

    int min = INT_MAX;

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }
    return min;
}

int size_of_LL(Node *head)
{
    int n = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
            break;
        insert_at_tail(head, tail, x);
    }

    int sz = size_of_LL(head);
    if (sz == 1)
    {
        cout << 0;
    }
    else if (sz > 1)
    {
        int mx = max_here(head);

        int mn = min_here(head);
        cout << mx - mn << endl;
    }

    return 0;
}