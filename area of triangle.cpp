#include<stdio.h>
int main()
{
	float area=0;
	int b,h;
	printf("enter the values h and b:");
	scanf("%d%d",&h,&b);
    area=0.5*b*h;
	printf("area of triangle %f%f\n",area,b,h);
	return 0;
}
