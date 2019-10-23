/* area of  circle using macro */
#include<stdio.h>
#define pi 3.14;
#define area(x) 3.14*x*x;
int main()
{
	float x,y;
	printf("enter the the value of y");
	scanf("%f",&y);
	x=area(y);
	printf("area=%f",x);
}

