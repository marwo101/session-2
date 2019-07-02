#include <stdio.h>
#include <stdlib.h>
void advanced_calculator(int x,int y){
int i,up;
scanf("%i",&up);
 if(up==1){
  scanf("%i %i",&x,&y);
        for (int i=1;i<=x;i++){
   if(i==y){
    i++;
   }

    printf("%i ",i);
}
 }
 if (up==2){
          scanf("%i %i",&x,&y);
printf("\naddition = %i",x+y);
printf("\nsubtraction = %i",x-y);
printf("\nmultiblication = %i",x*y);
printf("\ndivition = %i",x/y); }
if (up==3){
    int z;
    scanf("%i",&z);
    if(z==1){printf("normal ticket 50 LE"); }
else if(z==2){printf("vip ticket"); }
else if(z==3){printf("vip + pop corn"); }
}
}
int main()
{int up,x,y,i,z;
advanced_calculator(x,y);
    return 0;
}
