#include <stdio.h>
#include <stdlib.h>

 main()
{

    int mynumber;
    mynumber=7;
    printf("%d\n",mynumber);

    mynumber+=2;
    printf("%d\n",mynumber);

    mynumber-=5;
    printf("%d\n",mynumber);

    mynumber*=20;
    printf("%d\n",mynumber);

    mynumber/=4;
    printf("%d\n",mynumber);

    mynumber%=3;
    printf("%d\n",mynumber);

    mynumber+=2;
    printf("%d\n",mynumber);

           mynumber-=1;
           printf("%d\n",mynumber);

    mynumber&=7;
    printf("%d\n",mynumber);

    mynumber|=7;
    printf("%d\n",mynumber);

    mynumber^=3;
    printf("%d\n",mynumber);

           mynumber-=1;
           printf("%d\n",mynumber);

    mynumber<<=2;
    printf("%d\n",mynumber);

           mynumber-=9;
           printf("%d\n",mynumber);


    mynumber>>=1;
    printf("%d\n",mynumber);



    return 0;
}
