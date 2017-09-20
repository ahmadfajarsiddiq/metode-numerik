/*nama   : Ahmad Fajar Siddiq
  nim    : 3411151136
  kelas  :sie-c			*/

#include <stdio.h>
#include <conio.h>
#include<windows.h>


main(){
   int a,b,hasil = 0;
   int pilih;
   int i;
   home:

   printf("Tampilan Menu\n");
   printf("     Aritmatika\n");
   printf("1. Hitung a + b\n");
   printf("2. Hitung a - b\n");
   printf("3. Hitung a * b\n");
   printf("4. Hitung a ^ b\n");
   printf("5. Hitung F(x) = 2x^2-4x+1\n");
   printf("6. keluar\n");
   printf("Pilih : ");scanf(" %d",&pilih);
   if(pilih==1){
      goto tambah;
   }
      else if(pilih==2){
       	goto kurang;
      }
         else if(pilih==3){
             goto kali;
         }
            else if(pilih==4){
               goto pangkat;
            }
               else if(pilih==5){
               	  goto fungsi;
               }
                  else if (pilih==6){
               	     goto exit;
                  }
               	      else{
            		printf("masukan tidak bisa di proses !");
               	      }
   getch();
   tambah:
   printf("Masukan Nilai a : ");scanf("%d",&a);
   printf("Masukan Nilai b : ");scanf("%d",&b);
   hasil = a + b;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   kurang:
   printf("Masukan Nilai a : ");scanf("%d",&a);
   printf("Masukan Nilai b : ");scanf("%d",&b);
   hasil = a - b;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   kali:
   printf("Masukan Nilai a : ");scanf("%d",&a);
   printf("Masukan Nilai b : ");scanf("%d",&b);
   hasil = a * b;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   pangkat:
   printf("Masukan Nilai a : ");scanf("%d",&a);
   printf("Masukan Nilai b : ");scanf("%d",&b);
   hasil = a;
   for(i=1;i<b;i++){
   hasil = hasil * a;
   }
   printf("hasil : %d",hasil);
   getch();
   goto home;
   fungsi:
   printf("Masukan Nilai a :");scanf("%d",&a);
   printf("Masukan Nilai b :");scanf("%d",&b);
   for(i=a;i<=b;i++){
      hasil = (2*(i*i))-((4*i)+1);
      printf("hasil : %d\n",hasil);
   }
   getch();
   goto home;
exit:
return 0;
}
