#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, temp, *p1, *p2;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);
        
    p1=&arr[0],p2=&arr[num-1];
    for(i=0;i<num/2;i++)
    {
        temp=*p1;
        *p1=*p2;
        *p2=temp;
        p1++,p2--;
    }
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

