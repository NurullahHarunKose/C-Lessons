#include <stdio.h>
#include <stdlib.h>

int main()
{

   // Kullanıcı tarafından girdi alabilmek

   // Aşağıdaki kodlarda basit bir şekilde kullanıcıdan 3 veri çekiyoruz



   /*
   int mynumber,mynumber2,mynumber3;

   printf("Enter tree number :");

   scanf("%d %d %d",&mynumber,&mynumber2,&mynumber3);

   printf("The number you entered is: %d %d %d",mynumber,mynumber2,mynumber3);
   */



   printf("Bir sayi giriniz:\n");

   float r,c,a;
   const float p=3.1415;
   scanf("%f",&r);

   printf("\tr\t\t\talan\t\t\thacim\n");
   printf("--------------\t\t-----------------\t-----------------\n");


   c=2*p*r;
   a=p*r*r;

   printf("%f \t\t %f \t\t %f\n\n\n\n",r,c,a);




   float mynumber1,mynumber2,mynumber3,mynumber4,s1,s2,s3,s4,s5,s6,s7,s8;

   printf("Karesinin ve kupunun hesaplanmasi icin 4 veri giriniz:\n");

   scanf("%f %f %f %f",&mynumber1,&mynumber2,&mynumber3,&mynumber4);



   printf("sayi\t\t\tkare\t\t\tkup\n");
   printf("---------\t\t---------\t\t---------\t\t\n");





   s1=mynumber1*mynumber1;
   s2=mynumber2*mynumber2;
   s3=mynumber3*mynumber3;
   s4=mynumber4*mynumber4;

   s5=mynumber1*mynumber1*mynumber1;
   s6=mynumber2*mynumber2*mynumber2;
   s7=mynumber3*mynumber3*mynumber3;
   s8=mynumber4*mynumber4*mynumber4;


   printf("%f\t\t%f\t\t%f\n",mynumber1,s1,s5);
   printf("%f\t\t%f\t\t%f\n",mynumber2,s2,s6);
   printf("%f\t\t%f\t\t%f\n",mynumber3,s3,s7);
   printf("%f\t\t%f\t\t%f\n",mynumber4,s4,s8);

   printf("\t\t\t\t\t\t\t\t\t\t NURULLAH HARUN");


    return 0;
}
