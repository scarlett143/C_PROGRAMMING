#include<stdio.h>
int main()
{
	int l,b,h,area;//l=length,b=breadth,h=height
	scanf("%d",&l);
	scanf("%d",&b);
	scanf("%d",&h);
	area = l*b*h;
	printf("the area of rectangle(in cu.units)=%d",area);//cu. = cubic
	return 0;
}
