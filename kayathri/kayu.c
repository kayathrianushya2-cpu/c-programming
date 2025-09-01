#include<stdio.h>
int main()
{
	char str[50];
	printf("enter a message:");
	scanf("%[^\n]s",str);
	printf("%s",str);
	return 0;
}