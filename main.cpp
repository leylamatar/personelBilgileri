#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>
#include "personel.h"
using namespace std;

int main() {
  bool secim=true;
  while(secim){
  personel p1;
  cout <<" 1) personel Bilgileri  \n";
  cout <<" 2) 10 personelin yas ortalamasi hesaplama  \n";
  cout <<" 3) 10 personlein maas ortalamasi hesaplama  \n";
  cout<<endl;
  cout <<"yapmak istediginiz islemi seciniz : ";
  
  int sec;
  cin>>sec;
switch(sec){
  case 1 :
p1.personelBilgileri();
break;
case 2:
p1.yasOrtalamasi();
break;
case 3:
p1.maasOrtalamasi();
break;

default :
cout<<"Secenek bulunmamaktadir!"<<endl;
}
cout <<"\nBaska islem yapacaksaniz ' y ' basiniz ";
cout <<endl;
cout<<"cikis icin Y den farkli herhangi bir tusa basiniz ";
char s;
cin>>s;
if (s!='y'){
secim=false;
}
  }
  return 0;
}