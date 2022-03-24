#include <stdio.h>
#include <stdlib.h>

void asc_order(int a[50], int n);
void desc_order(int a[50], int n);
void swap(int *x, int *y);
void display(int a[50], int n);
int OPTION;

int main()
{
    printf("****SELECTION SORT****\n");
    int a[50], n, oprtn;
    printf("Please enter the size of array:- ");
    scanf("%d",&n);

    printf("Enter the %d elements:\n", n);
    for(int i=0; i<n; i++)
    {
	scanf("%d",&a[i]);
    }
    printf("\n");

    while(1)
    {
	printf("Choose the operation that you want to perform:\n");
     	printf("(1) Using Selection sort to sort in ascending order\n(2) Using Selection to sort in descending order\n(3) Exit\n");
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
    int min;
    OPTION = 1;
    for(int i=0; i<n-1; i++)
    {
	min = i;
	for(int j=i+1; j<n; j++)
	{
	    if(a[j]<a[min])
	    {
		min = j;
	    }
	}
	if(min!=i)
	{
	    swap(&a[min],&a[i]);
	}
    }
}

void desc_order(int a[50], int n)
{
    int min;
    OPTION = 2;
    for(int i=0; i<n-1; i++)
    {
	min = i;
	for(int j=i+1; j<n; j++)
	{
	    if(a[j]>a[min])
	    {
		min = j;
	    }
	}
	if(min!=i)
	{
	    swap(&a[min],&a[i]);
	}
    }
}

void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

void display(int a[50], int n)
{
    if(OPTION == 1)
    {
	printf("After sorting in ascending order using Selection Sort\n");
    }
    else
    {
	printf("After sorting in descending order using Selection Sort\n");
    }
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",a[i]);
    }
    printf("\b}\n");
}




