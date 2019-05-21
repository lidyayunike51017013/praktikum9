#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

int panjang,lebar; //deklarasi variabel global

void input(); //deklarasi prototipe fungsi

void luas()
{
 int ls; // deklarasi variabel lokal
 ls = panjang * lebar;
 cout<<" Luasnya adalah : "<<ls;
}

void keliling()
{
 int kl; //deklarasi variabel lokal
 kl = (2*panjang) + (2*lebar);
 cout<<"kelilingya adalah : "<<kl;
}

void Diagonal()
{
 float dg; //deklarasi variabel lokal
 dg = ((panjang*panjang) + (lebar*lebar));
 cout<<"Diagonalnya adalah : "<<dg;
}

void main()
{
 int pilih;
 do
 {
  clrscr();
  cout<<"Pilihlah ------> "<<endl;
  cout<<"1. Luas Persegi Panjang\n";
  cout<<"2. Keliling Persegi Panjang\n";
  cout<<"3. Diagonal Persegi panjang\n";
  cout<<"4. SELESAI \n";
  cout<<"Masukkan Pilihan Anda : ";
  cin>>pilih;

  if (pilih = 4)
      input();         //pemanggil fungsi input
    switch (pilih)
    {
     case 1 : luas();     //pemanggil fungsi luas
              break;
     case 2 : keliling(); //pemanggil fungsi keliling
              break;
     case 3 : Diagonal(); //pemanggil fungsi diagonal
              break;
     case 4 : cout<<" Terima Kasih ..!";
    }
     getch();
   } while (pilih !=4);
  }

  void input()
  {
   cout<<"Masukkan Nilai Panjang : ";
   cin>>panjang;
   cout<<"Masukkan Nilai Lebar : ";
   cin>>lebar;
   return;
}
