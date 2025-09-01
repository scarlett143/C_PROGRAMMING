#include<stdio.h>
int main()
{
	int num,a,b,c;
			//a = first digit of the given numbers
			//b = last digit of the given numbers
			//c = sum of the first and last digits
	scanf("%d",&num);
	a = num / 100;
	b = num % 10;
	c = a+b;
	printf("%d",c);
	return 0;
}
			
