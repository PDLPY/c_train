#include <stdio.h>
#include <stdlib.h>
int main() {
   int a,b;
    scanf("%d",&a);
    a=abs(a);
    b=0;
    while(a>0)
    {
        b+=a%10;
        a=a/10;
    }
    printf("%d",b);
    return 0;
}
