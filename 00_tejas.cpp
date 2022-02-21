#include <bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* next;
  node(int val){
    data = val;
    next = NULL;

  }
};

void Inssert(node* &head, int val){
  node* n= new node(val);

  if(head == NULL){
    head= n;
    return;
  }
  node* temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next=n;
}

void Display(node* head){
  node* temp = head;
  while (temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  
}
int main()
{
  node * head = NULL;
  Inssert(head,1);
  Inssert(head,2);
  Inssert(head,3);
  Inssert(head,4);
  Display(head);
  
  return 0;
}