#include <stdio.h>
#include <stdlib.h>
int main()
{
int a;
scanf("%d",&a);
getchar();
long long b;
scanf("%lld",&b);
getchar();
float c;
scanf("%f",&c);
getchar();
char d;
scanf("%c",&d);
getchar();
int capacity=100;
int len=0;
char *str=(char*)malloc(capacity*sizeof(char));
if (str==NULL)
{
    printf("内存分配失败\n");
    return 1;
}
char ch;
while((ch=getchar())!='\n')
{
    if(len+1>=capacity)
    {
        capacity*=2;
        char *teamp=(char*)realloc(str,capacity*sizeof(char));
        if(teamp==NULL)
        {
            printf("内存分配失败\n");
            free(str);
            return 1;
        }
        str=teamp;
    }
    str[len++]=ch;
}
printf("%d\n",a);
printf("%lld\n",b);
printf("%.1f\n",c);
printf("%c\n",d);
printf("%s\n",str);
return 0;
}
