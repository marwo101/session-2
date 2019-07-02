#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,x,z;
scanf("%i",&x);
for(int i=1;i<=x;i++){
    for(int j=x-i;j>=1;j--){
            printf(" ");
        }
        for(int z=1;z<=(i*2)-1;z++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}
