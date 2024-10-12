#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullanicidan dört basamakli sayi alip rakamlari toplamini hesaplayan program

    int x,bolum1,kalan1,bolum2,kalan2,bolum3,kalan3,toplam;

    printf("Enter a number: ");

    scanf("%d",&x);

    printf("Your number is: %d\n",x);

    bolum1=x/1000;
    kalan1=x%1000;

    bolum2=kalan1/100;
    kalan2=x%100;

    bolum3=kalan2/10;
    kalan3=x%10;

    toplam=bolum1+bolum2+bolum3+kalan3;

    printf("Girdikiniz sayinin basamaklari toplami: %d\n\n\n",toplam);

           printf("\t\t\t\t\t\t\t\tNURULLAHHARUN\n\n\n\n\n\n");


    return 0;
}
