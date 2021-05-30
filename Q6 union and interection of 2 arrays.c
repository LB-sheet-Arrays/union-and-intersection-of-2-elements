//a[k++] = a[k]=4;k=k+1;                                          //union         NOT WORKING
//a[++k] = k=k+1;a[k]=4;                                          //intersection  WORKING
#include<stdio.h> 

void main()
{
int a[100],b[100],n1,n2,i,j,choice,count=0;

printf("\n\t\tInput the sorted arrays ONLY for correct outputs");
	printf("\n\t\tArray no. 1");
	printf("\n\nHow many elements do you want? => ");
	scanf("%d",&n1);
	printf("\t\nPlz start filling your elements one by one.(SORTED!)");
	for(i=0;i<n1;i++)
	{
		printf("\n\nElement no %d ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\t\tArray no. 2");
	printf("\n\nHow many elements do you want? => ");
	scanf("%d",&n2);
	printf("\t\nPlz start filling your elements one by one.(SORTED!)");
	for(i=0;i<n2;i++)
	{
		printf("\n\nElement no %d ",i+1);
		scanf("%d",&b[i]);
	}
printf("\t\tChoose the operation you want to perform on your array.\n1=>  Find intersection\n2=>  Find union => ");
scanf("\n%d",&choice);
printf("\n");
switch(choice)
	{	
		case 1: //intersection                        Find a less complexity wala way
		i=0;j=0;
		printf("\nIntersection is => {");
		while(i<n1 && j<n2)
		{
			if(a[i]<b[j])
			{
				i++;
			}
			if(b[j]<a[i])
			{
				j++;
			}
			if(a[i]==b[j])
			{
				printf(" %d ",a[i]);
				i++;
				j++;
			}
		}
		printf("}");
	break;
		

		case 2://union
		i=0;j=0;
		printf("\nUnion is => {");
		while(i<n1 && j<n2)
		{
			if(a[i]<b[j])
			{
				printf(" %d ",a[i]);
				i++;
			}
			if(b[j]<a[i])
			{
				printf(" %d ",b[j]);
				j++;
			}
			if(a[i]==b[j])
			{
				printf(" %d ",a[i]);
				i++;
				j++;
			}
		}
		//To print the remaining array!
		if((i==n1) || (j==n2))
		{	
			while(i<n1)                  //if array1 is remaining 
			{
				printf(" %d ",a[i]);
				i++;
			}
			while(j<n2)                  //if array is remaining 
			{
				printf(" %d ",b[j]);
				j++;
			}
		}
			printf("}");
			break;
	}
}


