#include <stdio.h>
int main()
{
  int m,n,x=0;
  scanf("%d",&n);
  while(n!=0)
  {
     m=n%10;
     x=x*10+m;
     n/=10;
  }
  printf("%d\n",x);

}
