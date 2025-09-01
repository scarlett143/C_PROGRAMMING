#include<stdio.h>
int main()
{
	int a,eld;//except the last digit
	scanf("%d",&a);
	eld = a / 10;
	printf("the given digits are:%d\n",a);
	printf("except the last digit of the given number is:%d",eld);
	return 0;
}
