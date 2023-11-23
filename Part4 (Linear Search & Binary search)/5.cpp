// Linear Search on a Linked List: Implement 
// linear search to find a specific element in a linked list
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

struct node
{
    int data;
    struct node* next;
};

typedef struct node Node;

void push(Node** root, int data) 
{ 
   
    Node* new_node = new Node();
    new_node->data = data; 
    new_node->next = (*root); 
    (*root) = new_node; 
}

bool search(Node* root, int element) 
{ 
    Node* current = root; 
    while (current != NULL) 
    { 
        if (current->data == element) 
            return true; 
        current = current->next; 
    } 
    return false; 
} 
  
int main()
{
    Node* root = NULL;
    int element = 5;

    push(&root,1);
    push(&root,11);
    push(&root,4);
    push(&root,3);
    push(&root,5);
    push(&root,10);

    if(search(root,element))
    cout<<"Element Found";
    else
    cout<<"Not Found";
    
    return 0;
}