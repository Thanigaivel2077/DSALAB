#include<stdio.h>
int main()
{
	int n,i,search,found=0;
	printf("Enter number of elemeents in the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements of search:");
	scanf("%d",&search);
	for (i=0;i<n;i++)
	{
		if (arr[i]==search)
		{
			found=1;
			printf("Elements %d found at index %d\n",search,i);
			break;
		}
	}
	if (!found)
	{
		printf("Elements %d not found in the array \n",search);
	}
	return 0;
}
