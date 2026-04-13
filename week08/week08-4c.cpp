//week08-4c.cpp SOIT107_BASE_019
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
		if(a<c)
			printf("%d\n",a);
	if(b<a)
		if(b<c)
			printf("%d\n",b);
	if(c<a)
		if(c<b)
			printf("%d\n",c);
}
