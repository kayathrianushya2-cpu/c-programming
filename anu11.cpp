#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter a number:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	if(sum%2==0)
	{
		printf("the sum of a and b %d is even\n",sum);
	}
	else
	{
		printf("the sum of a and %d is odd\n",sum);
	}
	return 0;
}