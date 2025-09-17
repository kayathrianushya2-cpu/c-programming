#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("smallest");
	}
	else
	{
		printf("not smallest");
	}
	return 0;
}