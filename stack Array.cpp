#include<stdio.h>
#define size 100
 void push(int);
 void pop();
 void display();
 
 int stack[size],top=-1;
int main()
 {
 	int val,ch; 
 	while(2)
 	{
 	printf("\n\n******MENU******\n\n");
 	printf("1.push\n2.pop\n3.display\n");
	 
	 printf("Enter your choice:");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:
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
 void push(int val)
 {
 	if(top==size-1)
 	{
 		printf("\nstack is full");
	 }
	 else
	 {
	 	top++;
	 	stack[top]=val;
	 	printf("\ninserted sucessfully");
	 }
 }
 void pop()
 {
 	if(top==-1)
 	{
 		printf("\nstack is empty");
 	
	 }
	 else
	 {
	 	printf("\ndeleted :%d",stack[top]);
	 	top--;
	 }
 }
 void display()
 {
 	if(top==-1)
 	{
 		printf("\nstack is empty");
	 }
	 else 
	 {
	 	for(int i=top;i>=0;i--)
	 	{
	 		printf("%d ",stack[i]);
		 }
	 }
 }
