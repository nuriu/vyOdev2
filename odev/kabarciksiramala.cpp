//------------------------------------------------------------------------------
// Dosya Adı:           kabarciksiralama.cpp
// Dosya Açıklaması:    kabarcık sıralama sınıfının sıralama davranışı
// Oluşturma Tarihi:    19.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (19.04.16)
//
//------------------------------------------------------------------------------

#include <kabarciksiramala.hpp>

KabarcikSiramala::KabarcikSiramala()
{

}

void KabarcikSiramala::Sirala(int dizi[], int dizininBoyutu)
{
    bool degistirilmeDurumu = true;
    int gecici, j = 0;

    while (degistirilmeDurumu)
    {
        degistirilmeDurumu = false;
        j++;

        for (int i = 0; i < dizininBoyutu - j; i++)
        {
            if (dizi[i] > dizi[i+1])
            {
                gecici = dizi[i];
                dizi[i] = dizi[i + 1];
                dizi[i + 1] = gecici;
                degistirilmeDurumu = true;
            }
        }
    }
}
