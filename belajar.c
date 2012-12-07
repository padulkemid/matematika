/* Ini adalah source code untuk program Matematika buatan saya yang bisa di cari di GitHub.
 * Juga ini di lisensikan oleh GPL v2 
 * Pembuat : Fadhil Muhammad
 * Kritik Saran bisa langsung mention twitter saya @dhulFMS
 * Terima Kasih
 */

#include<stdio.h>

int main()
{
  int b,btambah,c,ckali,d,dkurang;
  char pilihan;
  printf("Program C Matematika , silahkan anda ingin melakukan apa ?\n");
  printf("[x] Perkalian\n");
  printf("[p] Pertambahan\n");
  printf("[k] Pengurangan\n");
  scanf("%c",&pilihan);
  switch (pilihan)
  {
    case 'x':
       printf(" Angka berapakah yang ingin anda Kalikan ? \n");
       printf(" Input disini = ");
       scanf("%d",&c);
       printf(" dan ingin dikalikan berapa ? \n");
       scanf("%d",&ckali);
       c = c * ckali;
       printf(" Jawabannya adalah = %d\n",c);
       break;
    case 'p':
       printf(" Angka berapakah yang ingin anda Tambahkan ?\n");
       printf(" Input disini = ");
       scanf("%d",&b);
       printf(" dan ingin ditambahkan berapa ? \n");
       scanf("%d",&btambah);
       b = b + btambah;
       printf(" Jawabannya adalah = %d\n",b);
       break;
    case 'k':
       printf(" Angka berapakah yang ingin anda Kurangi ?\n");
       printf(" Input disini = ");
       scanf("%d",&d);
       printf(" dan ingin dikurangi berapa ? \n");
       scanf("%d",&dkurang);
       d = d - dkurang;
       printf(" Jawabannya adalah = %d\n",d);
       break;
    default:
       printf( " Salah pilih , Coba Lagi ! \n");
  }
  printf("\n");
  printf("\n");
  printf(" ===========-------------------============== ");
  return 0;
}
