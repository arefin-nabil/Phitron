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

void dlt_at_head(Node *&head)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}

void dlt_any_pos(Node *&head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}

void dlt_at_tail(Node *head, Node *tail, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    tail = tmp;
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
    // dlt_at_head(head);
    // dlt_at_head(head);
    // dlt_any_pos(head, 2);
    //dlt_at_tail(head, tail, 3);
    //dlt_at_tail(head, tail, 2);
    print_it(head);
    return 0;
}