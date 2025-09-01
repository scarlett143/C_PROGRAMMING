#include<stdio.h>
int main()
{
	float r,area;//r = radius of a circle
	scanf("%f",&r);
	float PI = 3.141592;
	area = PI*(r*r);
	printf("the area of circle(in sq.units)=%f",area);//sq. = square
	return 0;
}
