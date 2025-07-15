#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// void insert_at_head(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     newnode->next = head;
//     head->prev = newnode;
//     head = newnode;
// }

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }

// void insert_at_any_pos(Node *&head, int idx, int val)
// {
//     Node *newnode = new Node(val);
//     Node *tmp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         tmp = tmp->next;
//     }
//     newnode->next = tmp->next;
//     tmp->next->prev = newnode;
//     tmp->next = newnode;
//     newnode->prev = tmp;
// }

void delete_head(Node*&head, Node* &tail)
{
    Node *tmp = head;
    head = head->next;
    delete tmp;
    if (head==NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;

}

void delete_tail(Node *&head, Node *&tail)
{
    Node *tmp = tail;
    tail = tail->prev;
    delete tmp;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_any_pos(Node*&head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deletenode;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = a;

    // insert_at_any_pos(head, 1, 100);
    print_forward(head);
    // delete_head(head, tail);
    //delete_tail(head, tail);
    delete_any_pos(head, 1);
    print_forward(head);
    // print_backward(tail);
    return 0;
}