#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,a0;
    long n,a,b,c,sum; 
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++)
    { 
        a=1,b=2,sum=0;
        c=a+b;
        scanf("%ld",&n);
        while(a<=n)
        {
            if(a%2==0)
                sum+=a;
            a=b;
            b=c;
            c=a+b;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
