#include<stdio.h>
int main()
{
	int size,arr[size];
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the array elements in assiending order:");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	int first=0,last=size-1,se;
	printf("Enter the search element:");
	scanf("%d",&se);
	int middle=(first+last)/2;
	while(first<=last)
	{
	 if(arr[middle]<se)
	 {
	 	first=middle+1;
	 	middle=(first+last)/2;
	 }
	 else if(arr[middle]==se)
	 {
	 	printf("The search element is found in %d position",middle);
	 	break;
	 }
	 else
	 {
	 	last=middle-1;
	 	middle=(first+last)/2;
	 }
	}
	if(first>last)
	{
		printf("Element not found in the array");
	}

	return 0;
}
