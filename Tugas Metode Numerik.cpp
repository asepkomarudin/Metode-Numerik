#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

 int hasil;
 
 int tambah(int x, int y)
 {
 	hasil=x+y;
 	return hasil;
 }
 int kurang(int x, int y)
 {
 	hasil=x-y;
 	return hasil;
 }
 int kali(int x, int y)
 {
 	hasil=x*y;
 	return hasil;
 }
 void fungsi(int x,int y);	

 
 main()
 {
 	int pil=1,x,y;
 	
	 while(pil!=5)
 	{
 		printf("   MENU ARITMATIKA");
 		printf("\n Tugas Metode Numerik");
		printf("\n\n1. Penjumlahan");
		printf("\n\n2. Pengurangan");
		printf("\n\n3. Perkalian");
		printf("\n\n4. Pangkat");
		printf("\n\n5. Fungsi");
		printf("\n\nPilihan: ");
		scanf("%d",&pil);
		switch(pil)
		{
			case 1 : system("cls");
					 printf("Masukkan nilai x: ");
					 scanf("%d",&x);
					 printf("Masukkan nilai y: ");
					 scanf("%d",&y); 
					 hasil=tambah(x,y);
					 printf("Hasil dari X+Y adalah %d",hasil);
					 printf("\n\n\n\n");
					 break;
					 
			case 2 : system("cls");
					 printf("Masukkan nilai x:");
					 scanf("%d",&x);
					 printf("Masukkan nilai y:");
				     scanf("%d",&y); 
					 hasil=kurang(x,y);
					 printf("Hasil X-Y adalah %d",hasil);
					 printf("\n\n\n\n");
					 break;
					 
			case 3 : system("cls");
					 printf("Masukkan nilai x:");
					 scanf("%d",&x);
					 printf("Masukkan nilai y:");
				     scanf("%d",&y); 
					 hasil=kali(x,y);
					 printf("Hasil x*y adalah %d",hasil);
					 printf("\n\n\n\n");
					 break;
					 
			case 4 : system("cls");
					 float x,y,hasil;
   					 printf("Masukan nilai x: ");
   					 scanf("%f",&x);
   					 printf("Masukan nilai y: ");
   					 scanf("%f",&y);
   					 hasil = pow(x,y);
   					 printf("Hasil x^y adalah %f",hasil); 
					 printf("\n\n\n"); 				 
					 break;
					 
			case 5 : system("cls");
					 printf("Masukan nilai x: ");
					 scanf("%d",&x);
					 printf("Masukan nilai y: ");
					 scanf("%d",&y);
					 fungsi(x,y);
					 break;
					 
			default : printf("Pilihan anda tidak terdaftar dalam menu");
			
		}
 	}
 		
 	
 }
  void fungsi(int x,int y)
 {	
 	int i,hasil2;
 	
 	for(i=x;i<=y;i++){
 	hasil2=(2*(i*i))-(3*i)+1;
 	printf("Hasil:%d\n",hasil2);
 	}
 	
 }
 
