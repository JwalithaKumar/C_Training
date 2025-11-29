#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* createnode(int d)
{
    struct node *node1=malloc(sizeof(struct node));
    node1->data=d;
    node1->next=NULL;
};
void traversal(struct node *head)
{
    struct node *temp=malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
 struct node* ins_begin( struct node *head,int d)
{
    struct node *new=createnode(d);
    new->next=head;
    head=new;
    return head;
}
 struct node* delete( struct node *head,int key)
 {
     if(key==head->data){
     head=head->next;
     return head;
     }
     struct node *temp=head;
     while(temp!=NULL&& temp->next!=0)
     {
         if(temp->next->data==key)
         break;
         temp=temp->next;
     }
     
     
     
     if(temp!=NULL && temp->next!=NULL)
     {
     temp->next=temp->next->next;
     return head;
     }
     else
     {
         printf("Node not found!\n");
         return head;
     }
 }
struct node* reverse(struct node *head)
{
    struct node* p=NULL;
    struct node* n=NULL;
    struct node* temp=head;
    while(temp!=NULL)
    {
        n=temp->next;
        temp->next=p;
        p=temp;
        temp=n;
    }
    head=p;
    return head;
}

int main()
{
    struct node *head= createnode(99);
    head->next=createnode(88);
    head->next->next=createnode(77);
    head->next->next->next=createnode(66);
    head->next->next->next->next=createnode(55);
    head->next->next->next->next->next=createnode(44);
    printf("linked list:\n");
    traversal(head);
    head=ins_begin( head,100);
    printf("\nAfter insertion at beginning:\n");
    traversal(head);
    head=delete( head,100);
    printf("\nAfter deletion at beginning:\n");
    traversal(head);
    head=delete( head,66);
    printf("\nAfter deletion at middle:\n");
    traversal(head);
    printf("\nAfter deleting node not present: ");
    head=delete( head,33);
    traversal(head);
    head=reverse( head);
    printf("\nAfter reversing:\n");
    traversal(head);
    
    return 0;
}

