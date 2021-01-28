/* Ders=ALGORITMA VE PROGRAMLAMA 1
   Öðretmen=Doç.Dr.AYSEGUL ALAYBEYOGLU
   PROJE=(B)Sans Oyunlari Benzetimi
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int anamenu,menu1;
  int puan1=0;
  int puan2=0;
  int puan3=0;
  int puan4=0;
  int toplampuan=0;
  int a,b,randint;
  char cikis;
  anamenu:
  printf("\n_-_-_-_-ANA MENU-_-_-_-_\n");
  printf(" 1-Sans Oyunlari\n");
  printf(" 2-Cekilis Istatistikleri\n");
  printf(" 3-Cikis\n");
  anamenusecim:
  printf(" Secimizi giriniz-->  ");
  scanf("%d",&anamenu);

  switch(anamenu)
  {
   case 1:
    case1:
    printf("\n_-_-SANS OYUNLARI ALT MENUSU-_-_\n");
    printf(" 1-Sayisal Loto Oynama\n");
    printf(" 2-Sans Topu Oynama\n");
    printf(" 3-10 Numara Oynama\n");
    printf(" 4-Super Loto Oynama\n");
    printf(" 5-Ana Menu\n");
    printf("-> Toplam Odulunuz: %d puan <-\n",toplampuan);
    sansoyunlarisecim:
    printf(" Secimizi giriniz-->  ");
    scanf("%d",&menu1);

     switch (menu1)
     {
      case 1:
       sysllt:
       printf("\n Sayisal Loto Bolumune Hosgeldiniz\n Oynamak istediginiz 1-49 arasi 6 sayiyi girmeye baslayiniz\n");
       int dizi1[6],x1,y1,gecicibellek1;
        syslltscm:
        for(x1=0; x1<6; x1++)
        {
            printf(" %d.sayiyi giriniz:",x1+1);
            scanf("%d",&dizi1[x1]);
        }
        for(a=0; a<6; a++){  //degerlerin belirtilen aralýkta girilip girilmedigi kontrol ediliyor
         if (dizi1[a]>=50 || dizi1[a]<=0) {printf("Sinir degerleri astiniz, degerleri tekrar giriniz.\n\a"); goto syslltscm;}
        }
        for(a=0; a<6; a++){  //kullanýcýnýn girdigi sayýlar birbirinden farklý mý kontrol ediliyor
         for(b=0; b<6; b++){
            if(dizi1[a]==dizi1[b]){
                if(a==b){ break; }
                else if(dizi1[a]==dizi1[b]){printf("Ozdes sayilar var, sayilari tekrar giriniz.\n\a"); goto syslltscm;}
               }
             }
           }
         for(x1=0; x1<5; x1++){
         for(y1=0; y1<5-x1; y1++){
          if(dizi1[y1]>dizi1[y1+1]){
            gecicibellek1=dizi1[y1];
            dizi1[y1]=dizi1[y1+1];
            dizi1[y1+1]=gecicibellek1;
          }
         }
        }
       for(x1=0; x1<6; x1++)
        {
        printf(" %d ",dizi1[x1]);
        }
       printf("\n Kuponunuz Olusturulmustur.\n");

       int dizi2[6],x2,y2,gecicibellek2;
        printf(" Sayisal Loto Kazanan Numaralar: ");
        rndmsyslltscm:
        srand(time(0));
        for(x2=0; x2<6; x2++)
        {
         randint=1+rand()%49;
         dizi2[x2]=randint;
        }
        for(a=0; a<6; a++){ //random dizide 2 ayný sayý cýkarsa tekrar random dizi olusturulacak
         for(b=0; b<6; b++){
            if(dizi2[a]==dizi2[b]){
                if(a==b){ break; }
                else if(dizi2[a]==dizi2[b]){goto rndmsyslltscm;}
               }
             }
           }
       for(x2=0; x2<5; x2++){
        for(y2=0; y2<5-x2; y2++){
         if(dizi2[y2]>dizi2[y2+1]){
            gecicibellek2=dizi2[y2];
            dizi2[y2]=dizi2[y2+1];
            dizi2[y2+1]=gecicibellek2;
         }
        }
       }
       for(x2=0; x2<6; x2++){
        printf(" %d ",dizi2[x2]);
       }
        for(a=0; a<6; a++){
        for(b=0; b<6; b++){
         if(dizi1[a]==dizi2[b]) puan1=puan1+1;
          }
         }
          printf("\n %d tane sayi tutturdunuz.\n",puan1);
          switch(puan1)
          {
          case 0:
          case 1:
          case 2: printf(" Puan kazanamadiniz"); break;
          case 3: printf(" 32 puan kazandiniz"); toplampuan+=32; break;
          case 4: printf(" 64 puan kazandiniz"); toplampuan+=64; break;
          case 5: printf(" 128 puan kazandiniz"); toplampuan+=128; break;
          case 6: printf(" 256 puan kazandiniz"); toplampuan+=256; break;
          }
          printf("\n->Toplam Odulunuz %d Puan<-\n",toplampuan);
          puan1=0;
          printf(" Yeniden Sayisal Loto Oynamak Isterseniz E'ye, Cikmak icin H tusuna basiniz: ");
          sysltcikis:
          scanf("%s",&cikis);
          switch (cikis)
         {
          case 'e':
          case 'E':goto sysllt;
          break;
          case 'h':
          case 'H':goto anamenu;
          break;
          default: printf("Tanimlanmayan deger girdiniz, isleminizi tekrarlayin\n\a"); goto sysltcikis;
         }
       break;

      case 2:
       snstp:
        printf("\n Sans Topu Bolumune Hosgeldiniz.\n Oynamak istediginiz 1-34 arasi 5 sayiyi girmeye baslayiniz\n");
        int dizi3[5],x3,y3,gecicibellek3,sanstopu;
        snstpscm:
         for(x3=0; x3<5; x3++){
          printf(" %d.sayiyi giriniz:",x3+1);
          scanf("%d",&dizi3[x3]);
         }
         for(a=0; a<5; a++){   //degerlerin belirtilen aralýkta girilip girilmedigi kontrol ediliyor
         if (dizi3[a]>=35 || dizi3[a]<=0) {printf("Sinir degerleri astiniz, degerleri tekrar giriniz.\n\a"); goto snstpscm;}
         }
         for(a=0; a<5; a++){  //kullanýcýnýn girdigi sayýlar birbirinden farklý mý kontrol ediliyor
         for(b=0; b<5; b++){
            if(dizi3[a]==dizi3[b]){
                if(a==b){ break; }
                else if(dizi3[a]==dizi3[b]){printf("Ozdes sayilar var, sayilari tekrar giriniz.\n\a"); goto snstpscm;}
               }
             }
           }
         snstpsl:
         printf(" 1-14 arasinda bir sayi giriniz: ");
         scanf("%d",&sanstopu);
         if(sanstopu<=0 || sanstopu >=15) {printf("Sinir degeri astiniz, degeri tekrar giriniz.\n"); goto snstpsl;}


        for(x3=0; x3<4; x3++){
         for(y3=0; y3<4-x3; y3++){
          if(dizi3[y3]>dizi3[y3+1]){
            gecicibellek3=dizi3[y3];
            dizi3[y3]=dizi3[y3+1];
            dizi3[y3+1]=gecicibellek3;
          }
         }
        }
        for(x3=0; x3<5; x3++){
         printf(" %d ",dizi3[x3]);
        }
       printf("  '%d' \n Kuponunuz Olusturulmustur.\n",sanstopu);

       int dizi4[5],x4,y4,gecicibellek4;
       printf(" Sans Topu Kazanan Numaralar: ");
       rndmsnstpscm:
       srand((time(0)));
       for(x4=0; x4<5; x4++)
       {
         randint=1+rand()%34;
         dizi4[x4]=randint;
       }
       for(a=0; a<5; a++){  //random dizide 2 ayný sayý cýkarsa tekrar random dizi olusturulacak
         for(b=0; b<5; b++){
            if(dizi4[a]==dizi4[b]){
                if(a==b){ break; }
                else if(dizi4[a]==dizi4[b]){ goto rndmsnstpscm;}
               }
             }
           }
       for(x4=0; x4<4; x4++){
        for(y4=0; y4<4-x4; y4++){
        if(dizi4[y4]>dizi4[y4+1]){
          gecicibellek4=dizi4[y4];
          dizi4[y4]=dizi4[y4+1];
          dizi4[y4+1]=gecicibellek4;
         }
        }
       }
       for(x4=0; x4<5; x4++){
        printf(" %d ",dizi4[x4]);
       }
       int rastgele;
       srand(time(0));
       rastgele=1+rand()%14;
       printf("  '%d' ",rastgele);
       for(a=0; a<5; a++){
        for(b=0; b<5; b++){
         if(dizi4[a]==dizi3[b]) puan2=puan2+1; }
      }
       printf("\n 1-34 arasi %d tane sayiyi tutturdunuz.",puan2);
       if (sanstopu==rastgele) { printf(" 1-14 arasindaki sayiyi tutturdunuz");}
       else if(sanstopu!=rastgele) {printf(" 1-14 arasindaki sayiyi tutturamadiniz");}

       switch(puan2)
       {
       case 0: printf("\n Puan kazanamadiniz");  break;
       case 1: if (sanstopu==rastgele){
           toplampuan+=2; printf("\n 2 puan kazandiniz"); }
           else if (sanstopu!=rastgele) { printf("\n Puan kazanamadiniz");}
            break;
       case 2: if (sanstopu==rastgele){
           toplampuan+=4; printf("\n 4 puan kazandiniz"); }
           else if (sanstopu!=rastgele) { printf("\n Puan kazanamadiniz");}
           break;
       case 3: if (sanstopu==rastgele){
           toplampuan+=16; printf("\n 16 puan kazandiniz"); }
             else if(sanstopu=!rastgele) {
            toplampuan+=8; printf("\n 8 puan kazandiniz"); }   break;
       case 4: if (sanstopu==rastgele){
            toplampuan+=64; printf("\n 64 puan kazandiniz"); }
              else if (sanstopu!=rastgele){
            toplampuan+=32; printf("\n 32 puan kazandiniz"); }    break;
       case 5: if (sanstopu==rastgele){
            toplampuan+=256; printf("\n 256 puan kazandiniz"); }
              else if (sanstopu!=rastgele){
            toplampuan+=128; printf("\n 128 puan kazandiniz"); }    break;
        }
         printf("\n ->Toplam Odulunuz %d Puan<-\n",toplampuan);
          puan2=0;
          printf(" Yeniden Sans Topu Oynamak Isterseniz E'ye, Cikmak icin H tusuna basiniz ");
          snstpcikis:
          scanf("%s",&cikis);
          switch (cikis)
         {
          case 'e':
          case 'E':goto snstp;
          break;
          case 'h':
          case 'H':goto anamenu;
          break;
          default: printf("Tanimlanmayan deger girdiniz, isleminizi tekrarlayin\n\a"); goto snstpcikis;
         }
       break;

      case 3:
         nmr:
          printf("\n 10 Numara Bolumune Hosgeldiniz.\n Oynamak istediginiz 1-80 arasi 10 sayiyi girmeye baslayiniz\n");
          int dizi5[10],x5,y5,gecicibellek5;
          nmrscm:
          for(x5=0; x5<10; x5++)
          {
           printf(" %d.sayiyi giriniz:",x5+1);
           scanf("%d",&dizi5[x5]);
          }
          for(a=0; a<10; a++){      //degerlerin belirtilen aralýkta girilip girilmedigi kontrol ediliyor
         if (dizi5[a]>=81 || dizi5[a]<=0) {printf("Sinir degerleri astiniz, degerleri tekrar giriniz.\n\a"); goto nmrscm;}
        }
        for(a=0; a<10; a++){       //kullanýcýnýn girdigi sayýlar birbirinden farklý mý kontrol ediliyor
         for(b=0; b<10; b++){
            if(dizi5[a]==dizi5[b]){
                if(a==b){ break; }
                else if(dizi5[a]==dizi5[b]){printf("Ozdes sayilar var, sayilari tekrar giriniz.\n\a"); goto nmrscm;}
               }
             }
           }
          for(x5=0; x5<9; x5++){
            for(y5=0; y5<9-x5; y5++){
             if(dizi5[y5]>dizi5[y5+1]){
                gecicibellek5=dizi5[y5];
                dizi5[y5]=dizi5[y5+1];
                dizi5[y5+1]=gecicibellek5;
             }
            }
           }
         for(x5=0; x5<10; x5++)
         {
          printf(" %d ",dizi5[x5]);
         }
        printf("\n Kuponunuz Olusturulmustur.\n");

        int dizi6[10],x6,y6,gecicibellek6;
        printf(" Sayisal Loto Kazanan Numaralar: ");
        rndmnmrscm:
        srand(time(0));
        for(x6=0; x6<10; x6++)
        {
            randint=1+rand()%80;
            dizi6[x6]=randint;
        }
        for(a=0; a<10; a++){  //random dizide 2 ayný sayý cýkarsa tekrar random dizi olusturulacak
         for(b=0; b<10; b++){
            if(dizi6[a]==dizi6[b]){
                if(a==b){ break; }
                else if(dizi6[a]==dizi6[b]){ goto rndmnmrscm;}
               }
             }
           }
        for(x6=0; x6<9; x6++){
         for(y6=0; y6<9-x6; y6++){
          if(dizi6[y6]>dizi6[y6+1]){
            gecicibellek6=dizi6[y6];
            dizi6[y6]=dizi6[y6+1];
            dizi6[y6+1]=gecicibellek6;
          }
         }
        }
       for(x6=0; x6<10; x6++){
        printf(" %d ",dizi6[x6]);
       }
       for(a=0; a<10; a++){
        for(b=0; b<10; b++){
        if(dizi5[a]==dizi6[b]) puan3=puan3+1;
        }
       }
        printf("\n %d tane sayi tutturdunuz.\n",puan3);
        switch(puan3)
        {
     case 0: printf(" 8 puan kazandiniz"); toplampuan+=8; break;
     case 1:
     case 2:
     case 3:
     case 4:
     case 5: printf(" Puan kazanamadiniz"); break;
     case 6: printf(" 16 puan kazandiniz"); toplampuan+=16; break;
     case 7: printf(" 32 puan kazandiniz"); toplampuan+=32; break;
     case 8: printf(" 64 puan kazandiniz"); toplampuan+=64; break;
     case 9: printf(" 128 puan kazandiniz"); toplampuan+=128; break;
     case 10: printf(" 256 puan kazandiniz"); toplampuan+=256; break;
       }
      printf("\n->Toplam Odulunuz %d Puan<-\n",toplampuan);
      puan3=0;
      printf(" Yeniden 10 Numara Oynamak Isterseniz E'ye, Cikmak icin H tusuna basiniz: ");
          nmrcikis:
          scanf("%s",&cikis);
          switch (cikis)
         {
          case 'e':
          case 'E':goto nmr;
          break;
          case 'h':
          case 'H':goto anamenu;
          break;
          default: printf("Tanimlanmayan deger girdiniz, isleminizi tekrarlayin\n\a"); goto nmrcikis;
         }

      break;
      case 4:
        sprlt:
          printf("\n Super Loto Oynama Bolumune hosgeldiniz.\n Oynamak istediginiz 1-54 arasi 6 sayiyi girmeye baslayiniz:\n");
          int x7,y7,gecicibellek7,dizi7[6];
          sprltscm:
          for(x7=0; x7<6; x7++)
          {
              printf(" %d.sayiyi giriniz:",x7+1);
              scanf("%d",&dizi7[x7]);
          }
          for(a=0; a<6; a++){       //degerlerin belirtilen aralýkta girilip girilmedigi kontrol ediliyor
         if (dizi7[a]>=55 || dizi7[a]<=0) {printf("Sinir degerleri astiniz, degerleri tekrar giriniz.\n\a"); goto sprltscm;}
         }
         for(a=0; a<6; a++){        //kullanýcýnýn girdigi sayýlar birbirinden farklý mý kontrol ediliyor
         for(b=0; b<6; b++){
            if(dizi7[a]==dizi7[b]){
                if(a==b){ break; }
                else if(dizi7[a]==dizi7[b]){printf("Ozdes sayilar var, sayilari tekrar giriniz.\n\a"); goto sprltscm;}
               }
             }
           }
          for(x7=0; x7<5; x7++){
           for(y7=0; y7<5-x7; y7++){
            if(dizi7[y7]>dizi7[y7+1]){
                gecicibellek7=dizi7[y7];
                dizi7[y7]=dizi7[y7+1];
                dizi7[y7+1]=gecicibellek7;
            }
           }
          }
        for(x7=0; x7<6; x7++)
          {
          printf(" %d ", dizi7[x7]);
          }
        printf("\n Kuponunuz Olusturulmustur.");

        int dizi8[6],x8,y8,gecicibellek8;
         printf(" Super Loto Kazanan Numaralar: ");
         rndmsprltscm:
         srand(time(0));
         for(x8=0; x8<6; x8++)
         {
             randint=1+rand()%54;
             dizi8[x8]=randint;
         }
         for(a=0; a<6; a++){ //random dizide 2 ayný sayý cýkarsa tekrar random dizi olusturulacak
         for(b=0; b<6; b++){
            if(dizi8[a]==dizi8[b]){
                if(a==b){ break; }
                else if(dizi8[a]==dizi8[b]){goto rndmsprltscm;}
               }
             }
           }
        for(x8=0; x8<5; x8++){
         for(y8=0; y8<5-x8; y8++){
            if(dizi8[y8]>dizi8[y8+1]){
                gecicibellek8=dizi8[y8];
                dizi8[y8]=dizi8[y8+1];
                dizi8[y8+1]=gecicibellek8;
             }
           }
         }
        for(x8=0; x8<6; x8++){
         printf(" %d ",dizi8[x8]);
        }
        for(a=0; a<6; a++){
         for(b=0; b<6; b++){
          if(dizi7[a]==dizi8[b]) puan4=puan4+1;
         }
        }
        printf("\n %d tane sayi tutturdunuz.\n",puan4);
        switch(puan4)
        {
     case 0:
     case 1:
     case 2: printf(" Puan kazanamadiniz.");  break;
     case 3: printf(" 32 puan kazandiniz.");  toplampuan+=32; break;
     case 4: printf(" 64 puan kazandiniz.");  toplampuan+=64; break;
     case 5: printf(" 128 puan kazandiniz.");  toplampuan+=128; break;
     case 6: printf(" 256 puan kazandiniz.");  toplampuan+=256; break;
        }
     printf("\n->Toplam Odulunuz %d Puan<-\n",toplampuan);
     puan4=0;
     printf(" Yeniden Super Loto Oynamak Isterseniz E'ye, Cikmak icin H tusuna basiniz: ");
     sprltcikis:
       scanf("%s",&cikis);
       switch (cikis)
        {
        case 'e':
        case 'E':goto sprlt;
        break;
        case 'h':
        case 'H':goto anamenu;
        break;
        default: printf("Tanimlanmayan deger girdiniz, isleminizi tekrarlayin\n\a"); goto sprltcikis;
        }

      break;
      case 5: goto anamenu; break;
      default: printf("Tanimlanmayan deger girdiniz, islemini tekrarlayin\n\a"); goto sansoyunlarisecim;
     }

   case 2:
      printf("\n Cekilis Istastikleri Bolumune Hosgeldiniz.\n");
      printf(" Ne yazik ki bu bolumun algoritmasini kurmayi basarabilmis degiliz.\n");
      printf(" Ana Sayfaya Donmek icin her hangi bir tusa basiniz; \n");
      getch(); goto anamenu;
    break;

   case 3:
    printf("\nProgramdan cikiyorsunuz, devam etmek icin E'ye, programda kalmak icin H tusuna basiniz\n\a");
    cikissecim:
    printf("Seciminiz-->  ");
    scanf("%s",&cikis);
      switch (cikis)
       {
        case 'e':
        case 'E':exit(0);
        break;
        case 'h':
        case 'H':goto anamenu;
        break;
        default: printf("Tanimlanmayan deger girdiniz, isleminizi tekrarlayin\n\a"); goto cikissecim;
       }
       break;
  default: printf("Tanimlanmayan deger girdiniz, isleminizi tekrarlayin\n\a"); goto anamenusecim;
  }
   return 0;
  }


