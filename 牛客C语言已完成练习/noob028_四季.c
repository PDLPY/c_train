#include <stdio.h>
 
int main() {
    int a;
    scanf("%d",&a);
    int b=a%100;
    switch(b){
        case 3:
        case 4:
        case 5:
         printf("spring");
         break;
        case 6:
        case 7:
        case 8:
         printf("summer");
         break;
        case 9:
        case 10:
        case 11:
         printf("autumn");
         break;
        case 12:
        case 01:
        case 02:
        printf("winter");
        break;
    }
    return 0;
}
