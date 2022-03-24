#include <stdio.h>
#include <stdlib.h>

void asc_order(int a[50],int n);
void desc_order(int a[50], int n);
void display(int a[50], int n);
int check,count=0;

int main()
{
    printf("****Advanced Bubble Sort****\n");
    int a[50], n, oprtn;
    printf("Enter the size of array:- ");
    scanf("%d",&n);

    printf("Input the %d elements\n",n);
    for(int i=0; i<n; i++)
    {
	scanf("%d",&a[i]);
    }
    printf("\n");

    while(1)
    {
	printf("Choose the operation that you want to perform:\n");
	printf("(1)  Using Advance Bubble sort to sort in Ascending Order\n(2)  Using Advance Bubble sort to sort in Descending Order\n(3) Exit\n");
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
		printf("Invalid input! Try again\n");
	}
    }
}

void asc_order(int a[50], int n)
{
    int visit,temp;
    check = 1;
    count = 0;
    for(int i=0; i<n-1; i++)
    {
	count++;
	visit = 1;
	for(int j=0; j<n-1-i; j++)
	{
	    if(a[j]>a[j+1])
	    {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
		visit = 0;
	    }
	}
	if(visit==1)
	{
	    break;
	}
    }
    printf("Successfully sorted in Ascending Order with total pass %d\n",count);
}

void desc_order(int a[50], int n)
{
    int visit,temp;
    check = 2;
    count = 0;
    for(int i=0; i<n-1; i++)
    {
	count++;
	visit = 1;
	for(int j=0; j<n-1-i; j++)
	{
	    if(a[j]<a[j+1])
	    {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
		visit = 0;
	    }
	}
	if(visit==1)
	{
	    break;
	}
    }
    printf("Successfully sorted in Descending Order with total pass %d\n",count);
}

void display(int a[50], int n)
{
    if(check==1)
    {
	printf("After sorting in Ascending Order using Optimized Bubble Sort:\n");
    }
    else if(check==2)
    {
	printf("After sorting in Descending Order using Optimized Bubble Sort:\n");
    }
    printf("{ ");
    for(int i=0; i<n; i++)
    {
	printf("%d,",a[i]);
    }
    printf("\b }\n\n");
}

