#include<stdio.h>
int main()
{
	int size,i,a[10];
	int even_sum=0;
	
	printf("enter the size of the array=\n");
	scanf("%d",&size);
	
	printf("enter the array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			even_sum=even_sum+a[i];
		}
		else if
		{
			printf("there is no even elements.\n");
		}
	}
		
	printf("the sum of even elements in this array is:%d",even_sum);
	
}
