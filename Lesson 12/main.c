#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sabitucret,kullanim,birimrmfiayt,enflasyon,aratoplam,nihaitoplam;

    printf("Sabit Ucret:10\n");
     printf("Birim Fiyat:8\n");

    sabitucret=10;

    birimrmfiayt=8;


    printf("Kullanim miktari:");
    scanf("%f",&kullanim);


    printf("Enflasyon Yuzde:");
    scanf("%f",&enflasyon);

    sabitucret=sabitucret+sabitucret*enflasyon/100;

    aratoplam=kullanim*birimrmfiayt;

    aratoplam=aratoplam+aratoplam*enflasyon/100;

    nihaitoplam=aratoplam+sabitucret;

    printf("Toplam Borc:%f\n\n\n",nihaitoplam);


    return 0;
}
