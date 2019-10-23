/*passing array element in pointer */
#include<stdio.h>
void ptremt(int,int,int,int,int,int);
int main()
{
	int a[]={10,13,14,15,16,17};
	int i;
	ptremt(a[0],a[1],a[2],a[3],a[4],a[5]);
}
void ptremt(int a,int b,int c,int d,int e,int f)
{
    printf("%d %d %d %d %d %d",a,b,c,d,e,f);
}
