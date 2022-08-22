#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
void delete ();
struct node
{
    int data;
    struct node *next;
} * newnode, *head, *temp, *prev;
void main()
{
    insert();
    display();
    delete ();
    display();
}
void insert()
{
    int choice = 1;
    do
    {
        newnode = malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("  %d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("enter the choice:");
        scanf("%d", &choice);
    } while (choice);
}
void display()
{
    temp = head;
    while (temp->next != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf(" %d", temp->data);
}
void delete ()
{
    int element;
    printf("\nenter the element to be deleted:");
    scanf(" %d", &element);
    temp = head;
    while (temp->data != element)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}
