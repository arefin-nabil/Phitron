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

void printt_it(Node*head)
{
    Node *tmp = head;
   // int cnt [10] = {0};
    while (tmp != NULL)
    {
        // int vl = tmp->val;
        // cnt[vl]++;
        // cout << val;
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}

int main() {

    Node *head = new Node(5);
    Node *a = new Node(4);
    Node *b = new Node(8);
    Node *c = new Node(6);
    Node *d = new Node(2);
    Node *e = new Node(1);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    printt_it(head);

    return 0;
}