//week08-3c.cpp SOIT107_BASE_015
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	if(a>100&&a<1000)
	b=a/100;
	if(a>1000&&a<10000)
	b=a/1000;
	printf("%d",b);
}
