#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){             //oyun
srand(time(NULL));
int x, zar1=rand()%6+1, zar2=rand()%6+1;
int toplam= zar1+zar2;
int bjsecim;

printf("Oynamak istediginiz oyunu secin: \n1-Barbut\n2-Blackjack \n\n");     //MENÜ
scanf("%d", &x);
system("cls");
switch (x){
case 1:             //BARBUT OYUNU
    printf("\nZarlar Atiliyor...\n");
    printf("Zarlar: %d  %d \n", zar1, zar2 );
    printf("zarlarinizin toplami: %d \n\n", toplam);
if (toplam == 7 || toplam == 11){
    printf(" KAZANDINIZ!!\n\n");
}
else if(toplam == 4|| toplam == 5||toplam == 6||toplam==8||toplam==9||toplam==10){
    printf("KAYBETTINIZ!!\n\n");
}
else{
    int oyuncusayisi=toplam;
        printf("Kazanmaniz icin atmaniz gereken yeni sayi: %d \n\n", oyuncusayisi);
        while(1){
            int zar3= rand()%6+1, zar4= rand()%6+1;
            int yenitoplam=zar3+zar4;
            printf("Zarlar tekrar atiliyor...\n");
            printf("Zarlariniz: %d  %d\n", zar3, zar4);
            printf("Zarlarinizin toplami: %d \n\n", yenitoplam);
            if (yenitoplam==7){
                printf("KAYBETTINIZ!!\n\n");
                break;
            }
            else if(yenitoplam==oyuncusayisi){
                 printf("KAZANDINIZ!!\n\n");
                 break;

            }
        }
}
break;
case 2:                                                        //   BLACKJACK
    printf("\nKartlar dagitiliyor...\n\n");
    int  kart1= rand()%13+1, kart2= rand()%13+1;
    int  dealer1= rand()%13+1, dealer2= rand()%13+1;
    int  oyuncutoplam=kart1+kart2, dealertoplam=dealer1+dealer2;
    printf("Krupiye'nin kartlari: ");
    int devamsecim;

    if (dealer1 == 1)
        printf("As Kapali\n\n");
    else if (dealer1 == 11)
        printf("Vale Kapali\n\n");
    else if (dealer1 == 12)
        printf("Kiz Kpalai\n\n");
    else if (dealer1 == 13)
        printf("Vale Kapali\n\n");
    else
        printf("%d Kapali\n\n", dealer1);

    printf("Kartlariniz: ");

    if (kart1 == 1)
        printf("As ");
    else if (kart1 == 11)
        printf("Vale ");
    else if (kart1 == 12)
        printf("Kiz ");
    else if (kart1 == 13)
        printf("Vale ");
    else
        printf("%d ", kart1);

    if (kart2 == 1)
        printf("As \n");
    else if (kart2 == 11)
        printf("Vale \n");
    else if (kart2 == 12)
        printf("Kiz \n");
    else if (kart2 == 13)
        printf("Vale \n");
    else
        printf("%d \n\n", kart2);
    if(oyuncutoplam == 21){
        printf("BLACKJACK!  KAZANDINIZ!!");
        break;
    }
    printf("Ne yapmak istersiniz:\n1-Kart al\n2-Ikiye Katla\n3-Bol\n4-Pas Gec\n");
    scanf("%d", &bjsecim);
    system("cls");
    switch (bjsecim){
case 1:

    int yenikart=rand()%13+1;
    int oyuncutoplam=oyuncutoplam+yenikart;
    printf("Krupiye'nin kartlari: %d Kapali\n\n", dealer1);
    printf("Kartlariniz: %d %d %d\n\n",kart1, kart2, yenikart);
    if(oyuncutoplam>21){
        printf("YANDIN!!\n\n");
        break;}
    printf("Ne yapmak istersiniz:\n1-Kart al\n2-Pas Gec\n");
    scanf("%d", &devamsecim);


    }


}
}


int main(){ //menüye dönme
    srand(time(NULL));
int secim;
do{
   menu();
    printf("Tekrar oynamak ister misiniz?\n1-Evet\n2-Hayir\n");
    scanf("%d", &secim);
     system("cls");
}while(secim==1);
return 0;



}
