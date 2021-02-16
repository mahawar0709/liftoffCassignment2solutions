#include<conio.h>
int main()
{
	int n,sum=0,a,r;
	printf("enter the number:");
	scanf("%d",&n);
	
	a=n;
	
	while(a!=0)
    {
      r=a%10;
	  sum=sum+r;
	  a=a/10;
	  	
	}
	printf("the sum of digits of the number %d is:%d",n,sum);
	
}
