#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node*head=NULL;
struct node*current=NULL;
void print()
{
	struct node *p=head;
	printf("\n[");
	while(p!=NULL)
	{
		printf("%d ",p->data );
		p=p->next;
	}
	printf("]");
}
void ib(int data)
{
	struct node* l=(struct node*)malloc(sizeof(struct node));
	l->data=data;
	l->next=head;
	head=l;
}
int main()
{
	ib(12);
	ib(15);
	ib(27);
	ib(26);
	printf("Linked list:");
	print();
	return 0;

}
