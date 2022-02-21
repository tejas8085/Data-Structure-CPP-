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

void Preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    int Root, l, r, ll, lr, rl, rr;
    cout << "Enter The Root Of tree:- " << endl;
    cin >> Root;
    cout<<"Enter the left child"<<endl;
    cin>>l;
    cout<<"Enter the right child"<<endl;
    cin>>r;
    cout<<"Enter the left -> left child"<<endl;
    cin>>ll;
    cout<<"Enter the left -> right child"<<endl;
    cin>>lr;
    cout<<"Enter the right -> left child"<<endl;
    cin>>rl;
    cout<<"Enter the right-> right child"<<endl;
    cin>>rr;
    node *root = new node(Root);
    root->left = new node(l);
    root->right = new node(r);
    root->left->left = new node(ll);
    root->left->right = new node(lr);
    root->right->left = new node(rl);
    root->right->right = new node(rr);

    cout<<"\nPreorder is :- ";
    Preorder(root);
    cout <<"\nInorder is :- ";
    Inorder(root);
    cout << "\nPostorder is :- ";
    Postorder(root);

    return 0;
}