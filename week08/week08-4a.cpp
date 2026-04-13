//week08-4a.cpp SOIT_BASE_009
#include <stdio.h>
int main()
{
	int a,b,c,d,max,min;
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))max=a;
	if((b>a)&&(b>c))max=b;
	if((c>a)&&(c>b))max=c;
	if((a<b)&&(a<c))min=a;
	if((b<a)&&(b<c))min=b;
	if((c<a)&&(c<b))min=c;
	d=max-min;
	printf("%d\n",d);
}
