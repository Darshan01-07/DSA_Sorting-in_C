
#include <stdio.h>
#include <stdlib.h>

void asc_order(int a[50], int n);
void desc_order(int a[50], int n);
void display(int a[50], int n);
int check = 0;

int main()
{
    printf("\nTraditional Bubble Sort\n");
    int a[50],n,oprtn;
    printf("Enter the number of elements:- ");
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
	printf("(1) Using Traditional Bubble sort to sort in Ascending Order\n(2) Using Traditional Bubble sort to sort in Descending Order\n(3) Exit\n");
	scanf("%d",&oprtn);
	switch(oprtn)
	{
	    case 1:
		asc_order(a, n);
		display(a, n);
		break;
	    case 2:
		desc_order(a, n);
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
    int temp;
    check = 1;
    for(int i=0; i<n-1; i++)
    {
	for(int j=0; j<n-1-i; j++)
	{
	    if(a[j]>a[j+1])
	    {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	    }
	}
    }
    printf("Successfully sorted in Ascending Order\n");
}

void desc_order(int a[50], int n)
{
    int temp;
    check = 2;
    for(int i=0; i<n-1; i++)
    {
	for(int j=0; j<n-1-i; j++)
	{
	    if(a[j]<a[j+1])
	    {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	    }
	}
    }
    printf("Successfully sorted in Descending Order\n");
}

void display(int a[50], int n)
{
    if(check==1)
    {
	printf("After sorting in ascending order using Traditional Bubble Sort:\n");
    }
    else if(check==2)
    {
	printf("After sorting in descending order using Traditional Bubble Sort:\n");
    }
    printf("{ ");
    for(int i=0; i<n; i++)
    {
        printf("%d,",a[i]);
    }
    printf("\b }\n");
}
