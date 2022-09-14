#include<stdio.h>
int main(){
	int array[10],i,num,s,temp=0;
	printf("enter the no of elements in array:");
	scanf("%d",&num);
	printf("enter the elements of array:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the element to search: ");
	scanf("%d",&s);
	
	for(i=0;i<num;i++)
	{
		if(array[i]==s)
		{
			break;
		}
	}
	if(i<num)
	{
		printf("entered elements found, index = %d",i);
	}
	else
	{
		printf("elemnt is not found");
	}
}

