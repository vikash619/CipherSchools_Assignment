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

static void printNode(struct node *head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}

struct node*  deleteFirstNode(struct node *head)
{
    if(head == NULL)
    {
        cout<<"List is empty "<<endl;
    }
    else{
        
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    }
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    
    struct node *ptr = head;
    ptr = addEnd(ptr,20);
    ptr = addEnd(ptr,30);
    
    cout<<"Before Deleting"<<endl;
    printNode(head);

    head = deleteFirstNode(head);
    
    ptr = head;
    cout<<"After Deleting"<<endl;
    
    printNode(head);
    
    return 0;
}
