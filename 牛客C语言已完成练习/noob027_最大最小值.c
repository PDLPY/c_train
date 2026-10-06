#include <stdio.h>
 
int main() {
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);
 
    // 1. 先假设 a 是最大值和最小值
    max = a;
    min = a;
 
   if(max<b) max=b;
   if(max<c) max=c;
   if(min>b) min=b;
   if(min>c) min=c;
 
    // 4. 输出结果
    printf("The maximum number is : %d\n", max);
    printf("The minimum number is : %d\n", min);
 
    return 0;
}
