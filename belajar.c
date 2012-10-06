// Mencoba untuk belajar C Programming
// Help me ya !

#include<stdio.h>

int main()
{
  int b,c,d;
  char pilihan;
  printf("Program C Matematika , silahkan anda pilih mau apa ?\n");
  printf("[x] Perkalian\n");
  printf("[p] Pertambahan\n");
  printf("[k] Pengurangan\n");
  scanf("%c",&pilihan);
  switch (pilihan)
  {
    case 'x':
       printf(" Program akan mengkalikan 2 , angka yang diinput anda \n");
       printf(" Input disini = ");
       scanf("%d",&c);
       c = c * 2;
       printf(" Jawabannya adalah = %d\n",c);
       break;
    case 'p':
       printf(" Program akan menambahkan 2 , angka yang diinput anda \n");
       printf(" Input disini = ");
       scanf("%d",&b);
       b = b + 2;
       printf(" Jawabannya adalah = %d\n",b);
       break;
    case 'k':
       printf(" Program akan mengurangkan 2 , angka yang diinput anda \n");
       printf(" Input disini = ");
       scanf("%d",&d);
       d = d - 2;
       printf(" Jawabannya adalah = %d\n",d);
       break;
    default:
       printf( " Salah pilih , Coba Lagi ! \n");
  }
  printf("\n");
  printf("\n");
  printf(" Terima Kasih telah menggunakan program ini, mohon maaf jika masih banyak kesalahan, karena saya masih newbie  \n");
  printf(" Copyright (c) Fadhil Muhammad, 2012 \n" );
  return 0;
}
