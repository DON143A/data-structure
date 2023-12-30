#include<stdio.h>
#define MAX 6

int Q[MAX],front=0,rear=0,count=0;
void insertQ()
{
	int data;
	if(count==MAX)
	{
		printf("\nThe queue is full/can't insert");
	}
	else
	{
		printf("\nEnter value for insert:");
		scanf("%d",&data);
		Q[rear]=data;
		rear=(rear+1)%MAX;
		count++;
		printf("\nvalue inserted successfully");
    }
}
void delQ()
{
	if(count==0)
	{
		printf("\nThe queue is empty");
	}
	else
	{
        printf("\ndeleted:%d",Q[front]);
        front=(front+1)%MAX;
        count--; 
	}
}
void dis()
{
if(count==0)
{
	printf("\nEmpty Queue");
}
else
{
	printf("\n elements in Queue:");
	int i,j=count;
	for(i=front;j!=0;j--)
	{
		printf("%d\t",Q[i]);
		i=(i+1)%MAX;
	}
}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n************MENU***********\n\n");
		printf("1.insert\n2.deletion\n3.display");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					insertQ();
					break;
			case 2:
				    delQ();
				    break;
			case 3:
				    dis();
				    break;
			default:
				    printf("!wrong choice/try again.");
		}
	}
	return 0;
}
