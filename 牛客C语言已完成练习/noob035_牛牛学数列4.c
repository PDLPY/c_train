#include <stdio.h>
 
int main() {
   int n,i,j,m,s;
   s=0;
   m=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     m=0;
        for(j=1;j<=i;j++)
        {
            m=m+j;
        }
        s=s+m;
   }
   printf("%d",s);
    return 0;
}
