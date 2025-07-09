#include <bits/stdc++.h>
using namespace std;
// ================== Creating Node =====================
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
// ================== Insert At Head =====================
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
// ================== Insert At Tail =====================
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
// ================== Insert At Any Position =====================
void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
// ================== Printing Linked List =====================
void print_it(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// ================== Size of linked list =====================
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
// ================== Sorting Linked List =====================
void sort_linked_list(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
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
    int va;
    while (1)
    {
        cin >> va;
        if (va == -1)
            break;
        insert_at_tail(head, tail, va);
    }

    int idx, val;
    while (cin >> idx >> val)
    {
        int sz = size_of_LL(head);
        if (idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
        }
        print_it(head);
    }

    return 0;
}