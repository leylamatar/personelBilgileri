#include <iostream>
#include "personel.h"
#include <fstream>
#include <string.h>
using namespace std;

personel::personel(){

}
void personel::personelBilgileri(){

fstream file;
file.open("personelBilgileri.txt",ios::in);
char a[20];
cout<<"personelin bilgileri icin Sicil Numarasini giriniz : ";
cin.ignore();
cin.getline(a,20);
int x=0;
while(!file.eof()){
file.getline(sicil_no,20,' ');
file.getline(isim,20,' ');
file.getline(soyisim,20,' ');
file.getline(dogum_yili,20,' ');
file.getline(aylik_calisma_saati,20,' ');
file.getline(saat_basi_ucreti,20);

if(strcmp(sicil_no,a)==0){
cout<<"SICIL NUMARASI : "<<sicil_no<<endl;
cout <<"ISIM : "<<isim<<endl;
cout<<"SOYISIM : "<<soyisim<<endl;
cout<<"DOGUM YILI : "<<dogum_yili<<endl;
cout<<"AYLIK CALISMA SAATI: "<<aylik_calisma_saati<<endl;
cout<<"SAAT BASI UCRETI : "<<saat_basi_ucreti<<endl;
x=1;
break;
}
}
if(x==0){
  cout<<"Bu sicil numarasina sahip personel bulunmamaktadir .";
  cout<<endl;
}
file.close();
}

void personel::yasOrtalamasi(){
ifstream file("personelBilgileri.txt");
int yil=2020;
int yas;
double toplam=0;
double sonuc=0;

for(int i=0;i<10;i++){
while(file>>sicil_no>>isim>>soyisim>>dy>>aylik_calisma_saati>>saat_basi_ucreti){

yas=yil-dy;
toplam += yas;
}
}

sonuc=toplam/10;
cout<<endl;
cout<<"10 Personelin yas ortalamasi : "<<sonuc<<endl;
file.close();
}


void personel::maasOrtalamasi(){
ifstream file("personelBilgileri.txt");
float maas;
float toplam=0;
float sonuc=0;

for(int i=0;i<10;i++){
while(file>>sicil_no>>isim>>soyisim>>dy>>cs>>ucret){

maas=cs*ucret;
toplam += maas;
}
}

sonuc=toplam/10;
cout<<endl;
cout<<"10 Personelin maas ortalamasi : "<<sonuc<<endl;
file.close();
}