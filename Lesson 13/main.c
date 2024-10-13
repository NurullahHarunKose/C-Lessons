#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,t,o;


    printf("1. Sayiyi Giriniz:");
    scanf("%f",&x);

    printf("2. Sayiyi Giriniz:");
    scanf("%f",&y);

    printf("3. Sayiyi Giriniz:");
    scanf("%f",&z);

    printf("4. Sayiyi Giriniz:");
    scanf("%f",&t);

    o=(x+y+z+t)/4;

    printf("Ortalama:%f\n\n\n",o);







    int q,w,e,r,u;


    printf("Bir sayi giriniz:");
    scanf("%d",&q);     //printf("%d",q);

    w=q%1000;           //printf("%d",w);
    e=w%100;
    r=e%10;
    u=e/10;

    printf("Onlar Basamagi:%d\n",u);
    printf("Birler Basamagi:%d",r);

    printf("\n\n\n");

    return 0;
}
