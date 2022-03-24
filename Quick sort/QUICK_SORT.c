#include <stdio.h>
#include <stdlib.h>

void quick_sort(int a[50], int lb, int ub);
int partision(int a[50], int lb, int ub);
void swap(int *x, int *y);
void display(int a[50], int n);

int main()
{
    printf("****Quick Sort****\n");
    int a[50], n, oprtn;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    printf("Input the %d elements:\n",n);
    for(int i=0; i<n; i++)
    {
	scanf("%d",&a[i]);
    }
    printf("\n");

    quick_sort(a, 0, n-1);
    display(a, n);
}

void quick_sort(int a[50], int lb, int ub)
{
    if(lb<ub)
    {
    	int pvidx = partision(a, lb, ub);
    	quick_sort(a, lb,  pvidx-1);
    	quick_sort(a, pvidx+1, ub);
    }
}

int partision(int a[50], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start<end)
    {
	while(a[start]<=pivot)
	{
	    start++;
	}
	while(a[end]>pivot)
	{
	    end--;
	}
	if(start<end)
	{
	    swap(&a[start],&a[end]);
	}
    }
    swap(&a[lb],&a[end]);
    return end;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int a[50], int n)
{
    printf("After sorting in ascending order using Quick sort:\n");
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",a[i]);
    }
    printf("\b}\n");
}

