#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void Inorder(node *root)
{
    stack<node *> s;
    node *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";

        curr = curr->right;
    }
}

void Preorder(node *root)
{
    stack<node *> s;
    node *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            cout << curr->data << " ";
            if (curr->right)
            {
                s.push(curr->right);
            }
            curr = curr->left;
        }
        if (s.empty() == false)
        {
            curr = s.top();
            s.pop();
        }
    }
}
void Postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> s1, s2;
    node *temp = root;
    s1.push(temp);

    while (!s1.empty())
    {
        temp = s1.top();
        s1.pop();
        s2.push(temp);
        if (temp->left != NULL)
        {
            s1.push(temp->left);
        }
        if (temp->right != NULL)
        {
            s1.push(temp->right);
        }
    }

    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
    cout << endl;
}

int main()
{
    int Root, l, r, ll, lr, rl, rr;
    cout << "Enter The Root Of tree:- " << endl;
    cin >> Root;
    cout << "Enter the left child" << endl;
    cin >> l;
    cout << "Enter the right child" << endl;
    cin >> r;
    cout << "Enter the left -> left child" << endl;
    cin >> ll;
    cout << "Enter the left -> right child" << endl;
    cin >> lr;
    cout << "Enter the right -> left child" << endl;
    cin >> rl;
    cout << "Enter the right-> right child" << endl;
    cin >> rr;

    node *root = new node(Root);

    root->left = new node(l);
    root->right = new node(r);
    root->left->left = new node(ll);
    root->left->right = new node(lr);
    root->right->left = new node(rl);
    root->right->right = new node(rr);
    cout << "\nPreorder is :- ";
    Preorder(root);
    cout << "\nInorder is :- ";
    Inorder(root);
    cout << "\nPostorder is :- ";
    Postorder(root);

    return 0;
}