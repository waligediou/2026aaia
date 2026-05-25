#include <stdio.h>
#include <stdlib.h>
int f(int n);


int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}

int f(int n)
{
	if(n>0)return n;
	if(n<0)return -n;

}
