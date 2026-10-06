#include <stdio.h>
#include <math.h>
int main() {
  int t,i;
  scanf("%d",&t);
  int a;
  for(i=1;i<=t;i++)
  {
    scanf("%d",&a);
    if(a==2)
    {
        printf("Yes\n");
        continue;
    }
   else if(a%2==0||a==1)
    {
        printf("No\n");
    }
    else
    {
        int e,m;
        m=0;
        for(e=3;e<=sqrt(a);e=e+2)
        {
            if(a%e==0)
            {
                m=1;
                break;
            }
            
        }
        if(m)
        {
            printf("No\n");
        }
        else {
        {
            printf("Yes\n");
        }
        }
 
    }
  }
    return 0;
}
