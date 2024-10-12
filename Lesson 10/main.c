#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,z;

    x=7;
    y=5;
    z=5;

    printf("%d\n",x==y);  //0

    printf("%d\n",x!=y);  //1

    printf("%d\n",x>y);  //1

    printf("%d\n",x<y);  //0

    printf("%d\n",z>=y);  //1

    printf("%d\n",z<=y);  //1

    printf("%d\n",x>5&&x>6);  //1

    printf("%d\n",x>5&&x>8);  //0

    printf("%d\n",x>5||x>6);  //1

    printf("%d\n",x>5||x>6);  //1

    printf("%d\n",!(x>5&&x>6));  //1#0

    printf("%d\n",!(x>5&&x>8));  //0#1

    return 0;
}
