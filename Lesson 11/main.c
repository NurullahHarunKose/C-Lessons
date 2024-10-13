#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kapali kaptaki gzin basincini hesaplayan program

    float p,v,n,r,t;

    r=0,82;

    printf("V?");
    scanf("%f",&v);

    printf("N?");
    scanf("%f",&n);

    printf("T?");
    scanf("%f",&t);

    p=n*r*t/v;
    printf("P=%f",p);


    return 0;
}
