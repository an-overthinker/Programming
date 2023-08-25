#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    int i,arr[10]={0};
    s = malloc(1000 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='0')
            arr[0]+=1;
        else if(s[i]=='1')
            arr[1]+=1;
        else if(s[i]=='2')
            arr[2]+=1;
        else if(s[i]=='3')
            arr[3]+=1;
        else if(s[i]=='4')
            arr[4]+=1;
        else if(s[i]=='5')
            arr[5]+=1;
        else if(s[i]=='6')
            arr[6]+=1;
        else if(s[i]=='7')
            arr[7]+=1;
        else if(s[i]=='8')
            arr[8]+=1;
        else if(s[i]=='9')
            arr[9]+=1;
    }
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
        
    return 0;
}

