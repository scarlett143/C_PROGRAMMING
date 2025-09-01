#include<stdio.h>
int main()
{
	int num,a,b;
				// '/' removes the last number
				// '%' gives last digit from the removed number
	scanf("%d",&num);
	a = num / 10;
	b = a % 10;
	printf("%d",b);
	return 0;
}
			
