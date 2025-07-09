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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int va;
        while (1)
        {
            cin >> va;
            if (va == -1)
                break;
            insert_at_tail(head, tail, va);
        }

        int val;
        cin >> val;

        int idx = 0, flg = 0;

        Node *tmp = head;
        while (tmp != NULL)
        {

            if (tmp->val == val)
            {
                cout << idx << endl;
                flg = 1;
                break;
            }
            tmp = tmp->next;
            idx++;
        }

        if (flg == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}