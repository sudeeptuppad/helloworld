#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node* head = NULL; // variable for temporarily storing node info

int len; //global variable for lenght

void append();
void lenght();
void display();



void main()
{
    int choice;
    while(1)
    {

    printf("\n1.APPEND");
    printf("\n2.COUNT");
    printf("\n3.DISPLAY");

    printf("ENTER YOUR CHOICE:\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: append();
                break;
        case 2: lenght();
                printf("the lenght of the node is :%d", len);
                break;
        case 3: display();
                break;
        case 4: exit(1);
        default : printf("WRONG CHOICE");
    }
    }

}

void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("data:");
    scanf("%d", &temp->data);
    temp ->link = NULL;  //temp points to the last node
    if(head = NULL) // if list is empty
    {
        head = temp;
    }
    else
    {
        struct node* p;
        p = head;
        while(p->link != NULL)
        {
            p = p->link;

        }
        p->link = temp; //p has to point to emp at the end

    }
}

void lenght()
{
    struct node *p;
    p = head;
    int count = 0;
      while(p != NULL)
       {
        count++;
       return count;
       }

    len = count;

}

void display()
{
    struct node* temp;
    temp = head;
    if(temp = NULL)
    {
        printf("List is empty:");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }

}
