#include <stdio.h>
 
int main() {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
float avg;
avg=(a+b+c)/3;
if(avg<60)
{
    printf("YES");
}
else {
printf("NO");
}
    return 0;
}
