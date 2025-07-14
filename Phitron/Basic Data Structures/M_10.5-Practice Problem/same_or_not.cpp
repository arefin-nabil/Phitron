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
    newnode->prev = tail;
    tail = newnode;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int va;
    while (1)
    {
        cin >> va;
        if (va == -1)
            break;
        insert_at_tail(head, tail, va);
    }

    int va2;
    while (1)
    {
        cin >> va2;
        if (va2 == -1)
            break;
        insert_at_tail(head2, tail2, va2);
    }

    int sz = size_of_LL(head);
    int sz2 = size_of_LL(head2);
    if (sz != sz2)
    {
        cout << "NO" << endl;
    }
    else
    {
        Node *tmp = head;
        Node *tmp2 = head2;
        int flg = 0;

        while (tmp != NULL && tmp2 != NULL)
        {

            if (tmp->val != tmp2->val)
            {
                flg = 1;
                break;
            }
            tmp = tmp->next;
            //tmp->prev = tmp;
            tmp2 = tmp2->next;
            //tmp2->prev = tmp2;
        }
        if (flg == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}