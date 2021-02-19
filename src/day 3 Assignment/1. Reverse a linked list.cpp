
#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *link;
    
};

struct node* addEnd(struct node *ptr, int data)
{
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->link = NULL;
    
    ptr->link = current;
    return current;
    
}

static void reverse(struct node** head)
{
    struct node* prev = NULL;
    struct node* current = *head;
    struct node* link = NULL;
    
    while (current != NULL) {
       
        link = current->link;
        current->link = prev;
        prev = current;
        current = link;
    }
    *head = prev;
}

static void printNode(struct node *head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        cout<<"After reverse : "<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    
    struct node *ptr = head;
    ptr = addEnd(ptr,20);
    ptr = addEnd(ptr,30);
    
    ptr = head;
    while(ptr != NULL)
    {
        cout<<"Before reverse : "<<ptr->data<<endl;
        ptr = ptr->link;
    }

    reverse(&head);
    printNode(head);
    
    return 0;
}
