#include <stdio.h>
 
int main() {
   int a,b,c,m;
   while(1)
   {
     scanf("%d %d %d",&a,&b,&c);
     if(a%10==0&&b%10==0&&c%10==0)
     {
            break;
     }
   }
   m=(int)(a*0.2+b*0.3+c*0.5);
   printf("%d",m);
    return 0;
}
