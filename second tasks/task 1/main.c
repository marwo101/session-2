#include <stdio.h>
#include <stdlib.h>
void myfunction(int x,int y){
    int i;
scanf("%i",&x);
scanf("%i",&y);
for (int i=1;i<=x;i++){
   if(i==y){
    i++;
   }

    printf("%i ",i);
}
};
int main()
{int x,y;
myfunction(x,y);
    return 0;
}
