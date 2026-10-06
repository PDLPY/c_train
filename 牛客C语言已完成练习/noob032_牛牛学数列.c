#include <stdio.h>
#include <math.h>
int main() {
  int a,i;
    int m,n;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    m=pow(-1,i-1);
    n=i*m+n;
  }
  printf("%d",n);
    return 0;
}
