#include<stdio.h>
int main()
{
	int num,copy;
	printf("enter a number:");
	scanf("%d",&num);
	copy=num/100;
	if(copy%2==0)
	{
		printf("the first digit number %d is even");
	}
	else
	{
		printf("the first digit number %d is odd");
	}
	return 0;
}