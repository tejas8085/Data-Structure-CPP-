#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Insert at front
void insert(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//  Insert after the given node

void insertafter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be Zero" << endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//  Insert at end
// Given a reference (pointer to pointer) to the head
// of a list and an int, appends a new node at the end
void append(Node **head_ref, int new_data)
{

    Node *new_node = new Node();

    Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

// display List
void Display(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 2;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = NULL;
    // Display(head);
    insert(&head, 7);
    insert(&head, 1);
    insertafter(head->next, 66);
    append(&head,44);

    cout << "list is :-";
    Display(head);

    return 0;
}