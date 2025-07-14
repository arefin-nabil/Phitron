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
void reverse_ll(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_ll(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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

    reverse_ll(head, tail, head);
    print_it(head);
    cout << head->val << endl;
    cout << tail->val << endl ;

    return 0;
}