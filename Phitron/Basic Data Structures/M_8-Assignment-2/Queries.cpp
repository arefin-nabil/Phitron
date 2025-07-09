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

void insert_at_tail2(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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

void print_it(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}

int size_of_LL(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

void dlt_at_head(Node *&head)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // int va;
    // while (1)
    // {
    //     cin >> va;
    //     if (va == -1)
    //         break;
    //     insert_at_tail(head, tail, va);
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int x, val;
        while (cin >> x >> val)
        {
            if (x == 0)
            {
                insert_at_head(head, tail, val);
                print_it(head);
            }
            else if (x == 1)
            {
                // cout << "x = " << x << " Val = " << val << endl;
                insert_at_tail2(head, val);
                print_it(head);
            }
            else if (x == 2)
            {
                int sz = size_of_LL(head);
                if (val == 0 && sz != 0)
                {
                    dlt_at_head(head);
                    print_it(head);
                    
                    // cout << "x = " << x << "Val = " << val <<endl;
                }
                else if (sz > val)
                {
                    dlt_any_pos(head, val);
                    print_it(head);
                }
                else
                {
                    print_it(head);
                }
            }
            cout << endl;
        }
    }

    return 0;
}