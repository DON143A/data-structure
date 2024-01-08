#include<stdio.h>
#include<stdlib.h>

#define size 9

struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];

void init()
{
    int i;
    for(i = 0; i < size; i++)
        chain[i] = NULL;
}

void insert(int value)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    int key = value % size;

    if(chain[key] == NULL)
        chain[key] = newNode;
   
    else
    {
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void print()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    init();

    insert(5);
    insert(28);
    insert(19);
    insert(15);
    insert(20);
    insert(33);
    insert(12);
    insert(17);
    insert(10);

    print();

    return 0;
}
