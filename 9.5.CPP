#include <iostream.h>

int bil,pangkat,panjang;
int perpangkatan();

int main()
  { cout<<"Masukkan bilangan yang akan dipangkatan : ";
    cin>>bil;
    cout<<"Masukkan pangkat dari bilangan tersebut : ";
    cin>>pangkat;
    cout<<"Hasilnya adalah : "<<perpangkatan();
    return (0);
  }

int perpangkatan()
  { int i, hasil=1;
    if (pangkat < 0)
       hasil=0;
    else
     { for (i=0; i<pangkat; i++)
          hasil*=bil;

     }
    return(hasil);
 }