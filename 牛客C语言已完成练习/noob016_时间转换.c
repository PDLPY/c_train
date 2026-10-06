#include <stdio.h>
 
int main() {
    int a;
    scanf("%d",&a);
    int b,c,d;
    b=a/3600;
    c=(a-b*3600)/60;
    d=a-b*3600-c*60;
    printf("%d %d %d",b,c,d);
    return 0;
}
