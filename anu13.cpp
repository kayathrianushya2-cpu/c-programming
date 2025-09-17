#include<stdio.h>
int main()
{
	int num,copy;
	printf("enter a number:");
	scanf("%d",&num);
	copy=num%10;
	if(copy%2==0)
	{
		printf("the last digit number %d is even\n",copy);
	}
	else
	{
		printf("the last digit number %d is odd\n",copy);
	}
	return 0;
}