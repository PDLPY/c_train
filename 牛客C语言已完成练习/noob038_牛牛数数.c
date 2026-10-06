#include <stdio.h>
 
int main() {
    int n,i,m,p,w;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         w=1;
      if(i%4==0)
      {
        continue;
      } 
      else {
        int temp;
        temp=i;
      while(temp>0)
      {
        m=temp%10;
        if(m==4)
        {
            w=0;
           break;
        }
        temp=temp/10;
      }
      if(w)
      {
        printf("%d\n",i);
      }
 
      }
    }
    return 0;
}
