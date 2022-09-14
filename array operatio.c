#include<stdio.h>
int array[10],size,r,i,op;

int insert();
int delete1();
int display();

int main()
{
	printf("Enter the array size: ");
	scanf("%d",&size);
	do
	{
		printf("\nEnter the operations: ");
		printf("\n1=Insert\n2=delete\n3=display\n4=Exit");
		scanf("%d",&r);
		switch(r)
		{
			case 1:
				{
					insert();
					break;
				}
			case 2:
				{
					delete1();
					break;
				}
			case 3:
				{
					display();
					break;
		    	}
		    case 4:
		    	{
		    		break;
				}
			default:
				{
					printf("invalid operations");
					break;
				}	
		}	
	}
	while(r!=4);
	return 0;
}

int insert()
{
		printf("enter the number to insert: ");
		for(i=0;i<size;i++)
		{
		   scanf("%d",&array[i]);
	    }
	    printf("\nInsertion completed!\n");
}

int delete1()
{
		printf("enter the position :");
		scanf("%d",&op);
		for(i=op-1;i<=size;i++)
		{
			array[i]=array[i+1];
		}
		printf("\nDeletion completed");
}

int display()
{
	printf("Elements in Array: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}
