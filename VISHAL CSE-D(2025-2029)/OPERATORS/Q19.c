#include<stdio.h>
int main()
{
	int a,b,c,d;// d = greatest number
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d = (a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
	printf("%d",d);
	return 0;
}
