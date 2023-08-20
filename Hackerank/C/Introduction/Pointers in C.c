#include <stdio.h>

void update(int *a,int *b)
{
    int c=*a;
    *a=*a+*b;
    //note that using abs() function with pointers as any or both of its argument will give undesired output
    if(c-*b < 0)
        *b=*b-c;
    else
        *b=c-*b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
