#include <bits/stdc++.h>
using namespace std;
int n = 0;
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

int print_it(Node *head)
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
            break;
        insert_at_tail(head, tail, x);
    }

    while (1)
    {
        cin >> x;
        if (x == -1)
            break;
        insert_at_tail(head2, tail2, x);
    }
    
    int cnt1 = print_it(head);
    int cnt2 = print_it(head2);
    if (cnt1 == cnt2){
        cout << "YES" << endl;
    } else
        cout << "NO";

    return 0;
}