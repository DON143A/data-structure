#include<stdio.h>
int main()
{
	int s,arr[s],se,i,j;
	printf("Enter the size of array :");
	scanf("%d",&s);
	printf("Enter the elements :");
	for( i=0;i<s;i++)
	{
	scanf("%d",&arr[i]);
}
	printf("Enter the search element:");
	scanf("%d",&se);
	for( j=0;j<s;j++)
	{
		if(arr[j]==se)
		{
			printf("The element in the %d position",j);
		}
	
	
	if(j==s-1)
	{
		printf("The element not existed");
	}
}
	return 0;
}
