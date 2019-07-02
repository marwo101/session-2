#include <stdio.h>
#include <stdlib.h>
void myfunction1(int x,int y){
int up;
scanf("%i %i %i",&up,&x,&y);
if(up==1){printf("addition = %i",x+y);}
 else if(up==2){printf("subtraction = %i",x-y);}
else if(up==3){printf("multiblication = %i",x*y);}
if(up==4){printf("divition = %i",x/y);}
}
void myfunction2(int up){
    scanf("%i",&up);
if(up==1){printf("normal ticket 50 LE"); }
else if(up==2){printf("vip ticket"); }
else if(up==3){printf("vip + pop corn"); }
}

int main()
{int x,y,user,up;
scanf("%i",&user);
if(user == 1){
    myfunction1(x,y);
}
else if(user == 2){
    myfunction2(up);
}
    return 0;
}
