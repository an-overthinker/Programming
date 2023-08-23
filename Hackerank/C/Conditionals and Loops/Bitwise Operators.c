#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int a=0,b=0,c=0,x,y,z,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(i!=j)
            {
                x=i&j;
                y=i|j;
                z=i^j;
                if(x<k && a<x)
                    a=x;
                if(y<k && b<y)
                    b=y;
                if(z<k && c<z)
                    c=z;
            }
        }
    }
    printf("%d\n%d\n%d",a,b,c);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

