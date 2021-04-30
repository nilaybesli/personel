#include "personel.h"
#include <iostream>
#include<fstream>
#define yil 2020
using namespace std;

personel::personel(){
    //ctor
}
personel::~personel(){
    //dtor
}

void personel::personelBilgisi(){

cout<<"Aradiginiz personel sicil numarasini giriniz : ";
cin>> no;
cout<<endl;

if (dosya.is_open()){
    while(!dosya.eof()){
      dosya>>sayi>>isim>>soyisim>>tarih>>saat>>maas;
      if(sayi==no){
        cout<<"Sicil NO :  "<<sayi<<"\tIsim-Soyisim :  "<<isim<<" "<<soyisim<<"\tDogum yili : "<<tarih;
        cout<<"\nAylik calisma saati : "<<saat<<"\tSaatlik aldigi ucret : "<< maas<<endl;
      }   
    }
  dosya.clear();
  dosya.seekg(0, ios::beg);
}

else{
        dosya.open("PersonelBilgileri.txt");
   while(!dosya.eof()){
        dosya>>sayi>>isim>>soyisim>>tarih>>saat>>maas;
      if(sayi==no){
        cout<<"Sicil NO :  "<<sayi<<"\tIsim-Soyisim :  "<<isim<<" "<<soyisim<<"\tDogum yili : "<<tarih;
        cout<<"\nAylik calisma saati : "<<saat<<"\tSaatlik aldigi ucret : "<< maas<<endl;
      }
    }
  dosya.clear();
  dosya.seekg(0, ios::beg);

}
}

void personel::yasOrtalama(){

if (dosya.is_open()){
  while(dosya>>sayi>>isim>>soyisim>>tarih>>saat>>maas){
    if (yil-tarih>17){
     toplamyas=toplamyas+(yil-tarih);
    }
  }
  cout<<"\nPersonellerin yaslarinin ortalamasi : "<<(toplamyas/10)<<endl ;
  dosya.clear();
  dosya.seekg(0, ios::beg);

}

else {
  dosya.open("PersonelBilgileri.txt");
  while(dosya>>sayi>>isim>>soyisim>>tarih>>saat>>maas){
    if (yil-tarih>17){
      toplamyas=toplamyas+(yil-tarih);
    }
  }
  cout<<"\nPersonellerin yaslarinin ortalamasi : "<<(toplamyas/10)<<endl ;
  dosya.clear();
  dosya.seekg(0, ios::beg);

}
}

void personel::ortalamaMaas(){

if (dosya.is_open()){
  while(dosya>>sayi>>isim>>soyisim>>tarih>>saat>>maas){
    ucret+=(maas*saat);
  }
  cout<<"\nPersonellerin aylik maaslarinin ortalamasi :"<<(ucret/10)<<endl;
  dosya.clear();
  dosya.seekg(0, ios::beg);
}

else{
  dosya.open("PersonelBilgileri.txt");
  while(dosya>>sayi>>isim>>soyisim>>tarih>>saat>>maas){
    ucret+=(maas*saat);
  }
  cout<<"\nPersonellerin aylik maaslarinin ortalamasi :"<<(ucret/10)<<endl;
  dosya.clear();
  dosya.seekg(0, ios::beg);
}
}