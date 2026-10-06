#include <stdio.h>
int main()
{
    int c,d;
    float m;
    scanf("%d %d",&c,&d);
    m=(float)d/c*100;
    printf("%.3f%%\n",m);
    return 0;
}
