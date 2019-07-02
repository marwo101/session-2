#include <stdio.h>
#include <stdlib.h>
void stars(int x){
int i,j;
scanf("%i",&x);
for(int i=x;i>=1;i--){
    for(int j=1;j<=x;j++){

        if(i<=j){printf("*");
        }

    }
                printf("\n");

}
}
int main()
{int i ,j,x;
stars(x);
    return 0;
}
