#ifndef PERSONEL_H
#define PERSONEL_H
#include<fstream>
#include<string>
using namespace std;

class personel{
  public:
    personel();
    virtual ~personel();

  int tarih,saat;
  float toplamyas=0,maas;
  float ucret=0;
  double sayi,no;
  string bilgi;
  string isim,soyisim;
  ifstream dosya;

    void yasOrtalama();
    void ortalamaMaas();
    void personelBilgisi();
};

#endif // PERSONEL_H