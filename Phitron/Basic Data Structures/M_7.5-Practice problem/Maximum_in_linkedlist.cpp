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
    // newnode = tail;
}

void print_it(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void sort_linked_list(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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
    sort_linked_list(head);
   // print_it(head);
    cout << head->val;
    return 0;
}