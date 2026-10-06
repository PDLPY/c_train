#include <stdio.h>
 
int main() {
    int n,m,i;
    int max,min,q;
    q=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(q)
        {
            max=m;
            min=m;
            q=0;
        }
        else
        {
            if(m>max)
            {
                max=m;
            }
            if(m<min)
            {
                min=m;
            }
        }
         
 
    }
    int y;
    y=max-min;
    printf("%d",y);
 
    return 0;
}
