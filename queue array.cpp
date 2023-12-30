#include<stdio.h>
#define size 100

void enqueue(int);
void dequeue();
void display();

int queue[size],rear=-1,front=-1;

int main()
{
int value,ch;
while(1)
{
	printf("\n\n************MENU***********\n\n");
	printf("1.Enqueue\n2.dequeue\n3.display");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
				printf("\nEnter value wants to insert:");
				scanf("%d",&value);
				enqueue(value);
		case 2:
			    dequeue();
		case 3:
		        display();
			
			
	}
}
return 0;
}
void enqueue(int value)
{
	if(rear==size-1)
	{
		printf("\nqueue if full");
	}
	else {
		if(front==-1)
		front=0;
		rear++;
		queue[rear]=value;
		printf("\nsuccessfully inserted ");
	}
}
void dequeue()
{
	if(front==rear)
	{
		printf("empty queue");
	}
	else
	{
		printf("\n%d is deleted",queue[front]);
		front++;
		if(front==rear)
		front=rear=-1;
	}
}
void display()
{
	if(rear==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		printf("\n list:\n");
		for(int i=0;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
