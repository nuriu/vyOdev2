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
void ikinciSoru()
{
    int dizi[10] = {9, 5, 8, 7, 6, 4, 1, 3, 10, 2};

    //--------------------------------------------------------------------------
    // KABARCIK SIRALAMA
    //--------------------------------------------------------------------------
    /*
    KabarcikSiramala k;
    int baslangic = clock();
    k.Sirala(dizi, 10);
    int son = clock();
    cout << "Kabarcık Sıralama Çalışma Zamanı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
    */

    //--------------------------------------------------------------------------
    // EKLEMELİ SIRALAMA
    //--------------------------------------------------------------------------
    /*
    EklemeliSiralama e;
    int baslangic = clock();
    e.Sirala(dizi, 10);
    int son = clock();
    cout << "Eklemeli Sıralama Çalışma Zamanı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
    */

    //--------------------------------------------------------------------------
    // SEÇMELİ SIRALAMA
    //--------------------------------------------------------------------------
    /*
    SecmeliSiralama s;
    int baslangic = clock();
    s.Sirala(dizi, 10);
    int son = clock();
    cout << "Seçmeli Sıralama Çalışma Zamanı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
    */

    //--------------------------------------------------------------------------
    // HIZLI SIRALAMA
    //--------------------------------------------------------------------------
    /*
    HizliSiralama h;
    int baslangic = clock();
    h.Sirala(dizi, 0, 9);
    int son = clock();
    cout << "Hızlı Sıralama Çalışma Zamanı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
    */

    //--------------------------------------------------------------------------
    // YIĞIN SIRALAMASI
    //--------------------------------------------------------------------------
    /*
    YiginSiralama y;
    int baslangic = clock();
    y.Sirala(dizi, 10);
    int son = clock();
    cout << "Yığın Sıralaması Çalışma Zamanı: " << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
    */
}

int main(int argc, char *argv[])
{
    //birinciSoruA();
    //birinciSoruB();
    //ikinciSoru();
    return 0;
}

