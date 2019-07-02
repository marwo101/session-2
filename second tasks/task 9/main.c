#include <stdio.h>
#include <stdlib.h>
#include "macros.h"
void phone (int up){
    scanf("%i",&up);
if(up==10){printf("%s\n", message);}
else if (up>10){printf("%s\n", text);}
 else if (up<10 && up>5){printf("%s\n", talk);}
 else if (up<5 && up>0){printf("%s\n", speech);}

}
int main()
{int up;
 phone(up);
    return 0;
}
