#include <stdio.h>
 
int main() {
    int a,k,m,d,c;
    scanf("%d",&a);
    k=a/1000;
    m=a/100%10;
    d=a%100/10;
    c=a%10;
    printf("%d%d%d%d",c,d,m,k);
    return 0;
}
