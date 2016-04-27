//------------------------------------------------------------------------------
// Dosya Adı:           main.cpp
// Dosya Açıklaması:    ana program dosyası
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                                      (25.04.16)
//                      Kadir Sefa Ünal (25.04.16)
//                                      (26.04.16)
//                                      (27.04.16)
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
void birinciSoru()
{
    srand(time(NULL));
    DaireselKuyruk d;
    OncelikliKuyruk o1, o2;
    Musteri m, musteriler[20],mOncelikKB[20], mOncelikBK[20];
    int toplamIslemSuresi = 0;
    for(int i = 0; i < 20; i++)
    {
        m.numara = i + 1;
        m.islemSuresiUret();
        d.Ekle(m);
        o1.EkleKucuktenBuyuge(m);
        o2.EkleBuyuktenKucuge(m);

    }
    d.Listele();

    for(int i = 0; i < 20; i++)
    {
        m = d.Cikart();
        toplamIslemSuresi += m.islemSuresi;
        musteriler[i].numara = m.numara;
        musteriler[i].islemSuresi = toplamIslemSuresi;
        cout << endl << m.numara
             << "\tnumarali musterinin toplam bekleme suresi: "
             << toplamIslemSuresi;
    }

    cout << endl << "Ortalama islem suresi: "
         << double(toplamIslemSuresi / 20) << endl;

//------------------------------------------------------------------------------
// 1. SORU - ÖNCELİKLİ KUYRUK UYGULAMASI
//------------------------------------------------------------------------------
    toplamIslemSuresi = 0;
    o1.Listele();
    for(int i = 0; i < 20; i++)
    {
        m = o1.Cikart();
        toplamIslemSuresi += m.islemSuresi;
        mOncelikKB[i].numara = m.numara;
        mOncelikKB[i].islemSuresi = toplamIslemSuresi;
        cout << endl << m.numara
             << "\tnumarali musterinin toplam bekleme suresi: "
             << toplamIslemSuresi;
    }
    cout << endl << "Ortalama islem suresi: "
         << double(toplamIslemSuresi / 20) << endl;

//------------------------------------------------------------------------------

     toplamIslemSuresi = 0;
     o2.Listele();
     for(int i = 0; i < 20; i++)
     {
         m = o2.Cikart();
         toplamIslemSuresi += m.islemSuresi;
         mOncelikBK[i].numara = m.numara;
         mOncelikBK[i].islemSuresi = toplamIslemSuresi;
         cout << endl << m.numara
              << "\tnumarali musterinin toplam bekleme suresi: "
              << toplamIslemSuresi;
     }
     cout << endl << "Ortalama islem suresi: "
          << double(toplamIslemSuresi / 20) << endl;

//------------------------------------------------------------------------------
    cout << endl << endl << "Zaman kazanan musteri listesi" << endl << endl;

    for (int i = 0; i < 20; i++)
    {
        // birincisinin ikincisinden büyük olduğu durumları bul
        for(int j = 0; j < 20; j++)
        {
            if((mOncelikKB[i].numara == musteriler[j].numara) &&
                mOncelikKB[i].islemSuresi < musteriler[j].islemSuresi)
            {
                int fark = musteriler[j].islemSuresi - mOncelikKB[i].islemSuresi;
                int yuzde = (fark * 100) / musteriler[j].islemSuresi ;

                cout << mOncelikKB[i].numara << "\tnumarali musteri\t->\t"
                     << fark << "\tsn zaman kazanmistir.  "
                     << yuzde << " %" << endl;
            }
        }
    }

//------------------------------------------------------------------------------
    cout << endl << endl << "---" << endl << endl;
    for (int i = 0; i < 20; i++)
    {
        // birincisinin ikincisinden büyük olduğu durumları bul
        for(int j = 0; j < 20; j++)
        {
            if((mOncelikBK[i].numara == musteriler[j].numara) &&
                mOncelikBK[i].islemSuresi < musteriler[j].islemSuresi)
            {
                int fark = musteriler[j].islemSuresi - mOncelikBK[i].islemSuresi;
                int yuzde = (fark * 100) / musteriler[j].islemSuresi ;

                cout << mOncelikBK[i].numara << "\tnumarali musteri\t->\t"
                     << fark << "\tsn zaman kazanmistir.  "
                     << yuzde << " %" << endl;
            }
        }
    }

}



//------------------------------------------------------------------------------
// 2. SORU - SIRALAMA ALGORİTMALARI UYGULAMALARI
//------------------------------------------------------------------------------

void RastgeleVeriUret(int *dizi, int elemanSayisi)
{
    for (int i = 0; i < elemanSayisi; i++)
        dizi[i] = rand();
}

void kabarcikSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    KabarcikSiramala k;
    int baslangic = clock();
    k.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: "
         << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void eklemeliSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    EklemeliSiralama e;
    int baslangic = clock();
    e.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: "
         << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void secmeliSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    SecmeliSiralama s;
    int baslangic = clock();
    s.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: "
         << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void hizliSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    HizliSiralama h;
    int baslangic = clock();
    h.Sirala(geciciDizi, 0, boyut - 1);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: "
         << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
}

void yiginSiralama(int dizi[], int boyut)
{
    int *geciciDizi = dizi;
    YiginSiralama y;
    int baslangic = clock();
    y.Sirala(geciciDizi, boyut);
    int son = clock();
    cout << "|\t" << boyut << " elemanlı: "
         << (son - baslangic)/double(CLOCKS_PER_SEC)*1000 << endl;
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

    RastgeleVeriUret(dizi100, 100);
    RastgeleVeriUret(dizi750, 750);
    RastgeleVeriUret(dizi1500, 1500);
    RastgeleVeriUret(dizi7500, 7500);
    RastgeleVeriUret(dizi15000, 15000);
    RastgeleVeriUret(dizi75000, 75000);
    RastgeleVeriUret(dizi150000, 150000);
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
    //birinciSoru();
    ikinciSoru();
    return 0;
}

