#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=1,i=1,s;
    printf("%d",f);
    for (s=0; s<12; s++)
    {
        printf("\n%d",f);
        i+=f;
        printf("\n%d",i);
        f+=i;
    }
    return 0;
}
