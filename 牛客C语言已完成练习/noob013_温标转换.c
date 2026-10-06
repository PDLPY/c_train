#include <stdio.h>
 
int main() {
    double k;
    scanf("%lf", &k);
 
    double f = (k - 273.15) * 1.8 + 32.0;
    printf("%.11lf", f);
    return 0;
}
