#include<stdio.h>
int main()
{
	int num,copy;
	printf("enter a number:");
	scanf("%d",&num);
	copy=num%10;
	if(copy%3==0)
	{
		printf("the last digit %d is divisible by 3\n",copy);
	}
	else
	{
		printf("the lat digit %d is not divisible by 3\n",copy);
	}
	return 0;
}