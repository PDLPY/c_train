#include <stdio.h>
 
int main() {
  int n,i;
  scanf("%d",&n);
  double m,t;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    m=1.0/i;
    t=t+m;
  }
  printf("%f",t);
    return 0;
}
