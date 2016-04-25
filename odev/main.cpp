//------------------------------------------------------------------------------
// Dosya Adı:           main.cpp
// Dosya Açıklaması:    ana program dosyası
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//
//------------------------------------------------------------------------------

#include <iostream>

//------------------------------------------------------------------------------
// KUYRUK SINIFLARI (1. Soru)
//------------------------------------------------------------------------------
#include <daireselkuyruk.hpp>
#include <onceliklikuyruk.hpp>

//------------------------------------------------------------------------------
// SIRALAMA SINIFLARI (2. Soru)
//------------------------------------------------------------------------------
#include <ctime>

#include <kabarciksiramala.hpp>
#include <eklemelisiralama.hpp>
#include <secmelisiralama.hpp>
#include <hizlisiralama.hpp>
#include <yiginsiralama.hpp>

using namespace std;


void RastgeleVeriUret(int *dizi, int elemanSayisi)
{
    for (int i = 0; i < elemanSayisi; i++)
    {
        dizi[i] = rand();
    }
}

//------------------------------------------------------------------------------
// 1. SORU - DAİRESEL KUYRUK UYGULAMASI
//------------------------------------------------------------------------------
void birinciSoruA()
{
    DaireselKuyruk d;
    d.Listele();
}

//------------------------------------------------------------------------------
// 1. SORU - ÖNCELİKLİ KUYRUK UYGULAMASI
//------------------------------------------------------------------------------
void birinciSoruB()
{
    OncelikliKuyruk o;
    o.Listele();
}

//------------------------------------------------------------------------------
// 2. SORU - SIRALAMA ALGORİTMALARI UYGULAMALARI
//------------------------------------------------------------------------------

void kabarcikSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    KabarcikSiramala k;
    int baslangic = clock();
    k.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void eklemeliSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    EklemeliSiralama e;
    int baslangic = clock();
    e.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void secmeliSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    SecmeliSiralama s;
    int baslangic = clock();
    s.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void hizliSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    HizliSiralama h;
    int baslangic = clock();
    h.Sirala(geciciDizi, 0, boyut - 1);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void yiginSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    YiginSiralama y;
    int baslangic = clock();
    y.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void ikinciSoru()
{
    int dizi100[100];
    int dizi750[750];
    int dizi1500[1500];
    int dizi7500[7500];
    int dizi15000[15000];
    int dizi75000[75000];
    int dizi150000[150000];

    //--------------------------------------------------------------------------
    // KABARCIK SIRALAMA
    //--------------------------------------------------------------------------
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\tKABARCIK SIRALAMA" << endl;
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\t" << endl;
    kabarcikSiralama(dizi100, 100);
    kabarcikSiralama(dizi750, 750);
    kabarcikSiralama(dizi1500, 1500);
    kabarcikSiralama(dizi7500, 7500);
    kabarcikSiralama(dizi15000, 15000);
    kabarcikSiralama(dizi75000, 75000);
    kabarcikSiralama(dizi150000, 150000);
    cout << "|\t" << endl;

    //--------------------------------------------------------------------------
    // EKLEMELİ SIRALAMA
    //--------------------------------------------------------------------------
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\tEKLEMELİ SIRALAMA" << endl;
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\t" << endl;
    eklemeliSiralama(dizi100, 100);
    eklemeliSiralama(dizi750, 750);
    eklemeliSiralama(dizi1500, 1500);
    eklemeliSiralama(dizi7500, 7500);
    eklemeliSiralama(dizi15000, 15000);
    eklemeliSiralama(dizi75000, 75000);
    eklemeliSiralama(dizi150000, 150000);
    cout << "|\t" << endl;

    //--------------------------------------------------------------------------
    // SEÇMELİ SIRALAMA
    //--------------------------------------------------------------------------
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\tSEÇMELİ SIRALAMA" << endl;
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\t" << endl;
    secmeliSiralama(dizi100, 100);
    secmeliSiralama(dizi750, 750);
    secmeliSiralama(dizi1500, 1500);
    secmeliSiralama(dizi7500, 7500);
    secmeliSiralama(dizi15000, 15000);
    secmeliSiralama(dizi75000, 75000);
    secmeliSiralama(dizi150000, 150000);
    cout << "|\t" << endl;

    //--------------------------------------------------------------------------
    // HIZLI SIRALAMA
    //--------------------------------------------------------------------------
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\tHIZLI SIRALAMA" << endl;
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\t" << endl;
    hizliSiralama(dizi100, 100);
    hizliSiralama(dizi750, 750);
    hizliSiralama(dizi1500, 1500);
    hizliSiralama(dizi7500, 7500);
    hizliSiralama(dizi15000, 15000);
    hizliSiralama(dizi75000, 75000);
    hizliSiralama(dizi150000, 150000);
    cout << "|\t" << endl;

    //--------------------------------------------------------------------------
    // YIĞIN SIRALAMASI
    //--------------------------------------------------------------------------
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\tYIĞIN SIRALAMASI" << endl;
    cout << "|--------------------------------------------------------" << endl;
    cout << "|\t" << endl;
    yiginSiralama(dizi100, 100);
    yiginSiralama(dizi750, 750);
    yiginSiralama(dizi1500, 1500);
    yiginSiralama(dizi7500, 7500);
    yiginSiralama(dizi15000, 15000);
    yiginSiralama(dizi75000, 75000);
    yiginSiralama(dizi150000, 150000);
    cout << "|\t" << endl;
    cout << "|--------------------------------------------------------" << endl;
}

int main(int argc, char *argv[])
{
    //birinciSoruA();
    //birinciSoruB();
    ikinciSoru();
    return 0;
}

