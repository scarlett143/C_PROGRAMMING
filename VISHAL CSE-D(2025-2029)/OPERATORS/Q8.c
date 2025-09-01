#include<stdio.h>
int main()
{
	int a,ld;//ld=last digit
	scanf("%d",&a);
	ld = a % 10;
	printf("the given digits are:%d\n",a);
	printf("the last digit of the given number is:%d",ld);
	return 0;
}
