#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y,z,o;
z=1;
scanf("%i %i",&x,&y);
for(int k=1;k<=x;k++){
    if(k==y*z){
        k++;
        z++;
    }
          printf("%i ",k);
}
    return 0;
}
