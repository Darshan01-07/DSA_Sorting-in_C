#include <stdio.h>
#include <stdlib.h>

void asc_order(int a[50], int n);
void desc_order(int a[50], int n);
void display(int a[50], int n);
int check;

int main()
{
    printf("****Insertion Sort****\n");
    int a[50], n, oprtn;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    printf("Input the %d elements:\n",n);
    for(int i=0; i<n; i++)
    {
	scanf("%d",&a[i]);
    }
    printf("\n");

    while(1)
    {
	printf("Choose the operation that you want to perform:\n");
	printf("(1) Using Insertion sort to sort in ascending order\n(2) Using Insertion sort to sort in descending order\n(3)  Exit\n");
	scanf("%d",&oprtn);
	switch(oprtn)
	{
	    case 1:
		asc_order(a,n);
		display(a, n);
		break;
	    case 2:
		desc_order(a,n);
		display(a, n);
		break;
	    case 3:
		exit(0);
	    default:
		printf("Invalid input! Try again\n\n");
	}
    }
}

void asc_order(int a[50], int n)
{
    int temp,j;
    check = 1;
    for(int i=1; i<n; i++)
    {
	temp = a[i];
	j = i-1;
	while(j>=0 && a[j]>temp)
	{
	    a[j+1] = a[j];
	    j--;
	}
	a[j+1] = temp;
    }
}

void desc_order(int a[50], int n)
{
    int temp,j;
    for(int i=1; i<n; i++)
    {
	temp = a[i];
	j = i-1;
   	 while(j>=0 && a[j]<temp)
    	{
	    a[j+1] = a[j];
	    j--;
    	}
    	    a[j+1] = temp;
    }
}

void display(int a[50], int n)
{
    if(check==1)
    {
	printf("After sorting in ascending order using Insertion Sort\n");
    }
    else
    {
	printf("After sorting in descending order using Insertion Sort\n");
    }
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",a[i]);
    }
    printf("\b}\n\n");
}






