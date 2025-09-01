#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	//b=c;
	c=a;
	a=b;
	b=c;
	printf("the value of a is %d\n",a);
	printf("the value of b is %d",b);
	return 0;
}
