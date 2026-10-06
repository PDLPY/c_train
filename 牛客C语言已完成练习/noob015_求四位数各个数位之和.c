#include <stdio.h>
 
int main() {
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    c=a%100/10;
    d=a/100%10;
    e=a/1000;
    printf("%d",b+c+d+e);
    return 0;
}
