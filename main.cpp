#include <iostream>
#include<fstream>
#include "personel.h"
using namespace std;

int main(){
ifstream dosya;
string bilgi;
personel p;

p.personelBilgisi();
p.ortalamaMaas();
p.yasOrtalama();

dosya.close();

return 0;
}
