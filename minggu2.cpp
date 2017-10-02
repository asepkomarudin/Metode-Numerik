#include<conio.h>
#include<stdio.h>
#include<math.h>

//kamus
  int x,y,hasil;

int main()
{
  void menu();
  void opening();

  opening();
  menu();

getch();
return 0;
}

//realisasi prototype
void opening(){
  printf("==================================================\n");
  printf(":::             MENU HITUNG-HITUNGAN           :::\n");
  printf("==================================================\n\n");
  }

void menu(){
int pilih;
char Y;
awal:              
  printf("sok dipilih : \n");    
  printf("1. menghitung x+y \n");
  printf("2. menghitung x-y \n");
  printf("3. menghitung x*y \n");
  printf("4. menghitung x pangkat y \n");
  printf("5. menghitung f(x) = 2x kuadrat - 3x + 1 \n\n");

  printf("ket.syarat no.5( X > x > Y )\n\n");

  printf("pilihan kamu? : "); scanf("%d", &pilih);

  switch(pilih){
   case 1: if(pilih==1){
          //clrscr();
          opening();

          printf("menghitung x+y\n");
          printf("input x : "); scanf("%d", &x);
          printf("input y : "); scanf("%d", &y);
          printf("\n");

          hasil = x + y;
          printf("hasilnya = %d\n\n", hasil);

          printf("kembali? [Y/N] : "); y=getche();
          while(y != 'n' && y != 'N'){
            //clrscr();
           if(y == 'y' || y == 'Y'){
             //clrscr();
               opening();
               goto awal;
           }
          }
     }
     break;
   case 2: if(pilih==2){
          //clrscr();
          opening();

          printf("menghitung x-y\n");
          printf("input x : "); scanf("%d", &x);
          printf("input y : "); scanf("%d", &y);
          printf("\n");

          hasil = x - y;
          printf("hasilnya = %d\n\n", hasil);

          printf("kembali? [Y/N] : "); y=getche();
          while(y != 'n' && y != 'N'){
            //clrscr();
           if(y == 'y' || y == 'Y'){
            // clrscr();
               opening();
               goto awal;
           }
          }
     }
     break;

   case 3: if(pilih==3){
         // clrscr();
          opening();

          printf("menghitung x*y\n");
          printf("input x : "); scanf("%d", &x);
          printf("input y : "); scanf("%d", &y);
          printf("\n");

          hasil = x * y;
          printf("hasilnya = %d\n\n", hasil);

          printf("kembali? [Y/N] : "); y=getche();
          while(y != 'n' && y != 'N'){
            //clrscr();
           if(y == 'y' || y == 'Y'){
             //clrscr();
               opening();
               goto awal;
           }
          }
     }
     break;

   case 4: if(pilih==4){
          //clrscr();
          opening();

          printf("menghitung x pangkat y\n");
          printf("input x : "); scanf("%d", &x);
          printf("input y : "); scanf("%d", &y);
          printf("\n");

          hasil = pow(x,y);
          printf("hasilnya = %d\n\n", hasil);

          printf("kembali? [Y/N] : "); y=getche();
          while(y != 'n' && y != 'N'){
            //clrscr();
           if(y == 'y' || y == 'Y'){
             //clrscr();
               opening();
               goto awal;
           }
          }
     }
     break;

   case 5: if(pilih==5){
          //clrscr();
          opening();

          printf("menghitung f(x) = 2x kuadrat - 3x + 1\n");

          printf("input x : "); scanf("%d", &x);
          printf("input y : "); scanf("%d", &y);

          printf("\n");


          hasil = 2*pow(x,y) - 3*(x) + 1;

          if(x < y){
          printf("hasilnya = %d\n\n", hasil);
          }
          else if(x > y){
          printf("angka yang diinput tidak memenuhi syarat gan & sist!\n");
          }

          printf("kembali? [Y/N] : "); y=getche();
          while(y != 'n' && y != 'N'){
            //clrscr();
           if(y == 'y' || y == 'Y'){
             //clrscr();
               opening();
               goto awal;
           }
          }
     }
     break;

         default : printf("pilihan anda mahiwal!"); getch();
         //clrscr();
         opening();
         goto awal;
   }
}
