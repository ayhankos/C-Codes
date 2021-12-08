#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 2  
class Ogrenci  
 {
 
  int no,vize,final; //private uyeleri
   public:  // erisimci fonksiyonlar
    int noAl(){return no;}
    int vizeAl(){return vize;}
    int finalAl(){return final;}
 
                 // Degistirici Fonksiyonlar
       void noAta(int  _no){no=_no;}
       void vizeAta(int  _vize){vize=_vize;}
       void finalAta(int   _final){final=_final;}
      };
 
int main()
 {
   Ogrenci sinif [SINIF_MEVCUDU ];  // 50 Ogrencilik dizi tanimi
      int no,vize,final;
      float ortalama;
 for(int i=0; i<SINIF_MEVCUDU; i++)
  {
     cout<<endl<<"Ogrenci numarasi,vize ve finali giriniz= ";
     cin>>no>>vize>>final;
     Ogrenci ogrenci;  // ogrenci nesnesine deger aktarimi
     ogrenci.noAta(no);
     ogrenci.vizeAta(vize);
     ogrenci.finalAta(final);
     sinif[i]=ogrenci;   // sinif dizisine eleman ekleme
      }
     for(int i=0; i<SINIF_MEVCUDU; i++)
      {
   ortalama=0.4*sinif[i].vizeAl()+0.6*sinif[i].finalAl();
    cout<<sinif[i].noAl()<<" numarali ogrencinin ortalamasi = "<<ortalama<<endl;
       }
return 0;
} 
