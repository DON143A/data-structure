#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*top=NULL;
void push(int val)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=top;	
newnode->data=val;
top=newnode;
if(top==NULL)
{
	 newnode->next=NULL;
}	
else

{
	newnode->next=top;
}
top=newnode;
}           
void pop()
{
	if(top==NULL)
	{
		printf("under flow");
	}
	else
	{
		struct node*temp=top;
		printf("deleted:%d",temp->data);
		top=temp->next;
		free(temp);
	}
 }
 void display()
 {
 	if(top==NULL)
 	{
 		printf("empty");
	 }
	 else{
	 	//struct node*temp=top;
	 	while(temp->next!=NULL)
	 	{
	 		printf("%d",temp->data);
	 		temp=(temp->next);
		 }
	 }
  } 
  int main()
  {
  	int ch,val;
  	while(2)
  	{
  		printf("\n1.push\n2.pop\n3.display");
  		scanf("%d",&ch);
  		switch(ch)
  		{	case 1:
	 		printf("Enter the insert value:");
	 		scanf("%d",&val);
	 		push(val);
	 		break;
	 	case 2:
		    pop();
		    break;
		case 3:
		    display();
		    break;
		 default:
		    printf("worng selection");
		    break;
  			
		  }
	  }
  }
