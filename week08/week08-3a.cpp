//week08-3a.cpp SOIT107_BASE_007
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a/10000;
	a=a-b*10000;
	c=a/1000;
	a=a-c*1000;
	d=a/100;
	a=a-d*100;
	e=a/10;
	f=a-e*10;
	printf("%d   %d   %d   %d   %d",b,c,d,e,f);
}
