#include <stdio.h>
 
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s,v;
    s=2*(a*b+b*c+c*a);
    v=a*b*c;
    printf("%d\n%d",s,v);
    return 0;
}
