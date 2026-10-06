#include <stdio.h>
 
int main() {
    int a,b,i,c,d;
    scanf("%d",&a);
    b=1;
    c=1;
    for(i=1;i<=a-2;i++)
    {
        d=b+c;
        b=c;
        c=d;
    }
    printf("%d",d);
    return 0;
}
