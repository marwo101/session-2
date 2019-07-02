#include <stdio.h>
#include <stdlib.h>

int main()
{int x,x1;
scanf("%i",&x);
x1=x;
for(int i=1;i<x1;i++){
    x=x*x1;
}
printf("%i",x);
    return 0;
}
