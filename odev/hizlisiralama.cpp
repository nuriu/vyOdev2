//------------------------------------------------------------------------------
// Dosya Adı:           hizlisiralama.cpp
// Dosya Açıklaması:    hızlı sıralama sınıfının sıralama davranışı
// Oluşturma Tarihi:    19.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (19.04.16)
//
//------------------------------------------------------------------------------

#include <hizlisiralama.hpp>

HizliSiralama::HizliSiralama()
{

}

void HizliSiralama::Sirala(int dizi[], int bas, int son)
{
    int i = bas, j = son, gecici, ortanca = dizi[(bas + son) / 2];

    while (i <= j)
    {
        while (dizi[i] < ortanca)
        {
            i++;
        }

        while (dizi[j] > ortanca)
        {
            j--;
        }

        if (i <= j)
        {
            gecici = dizi[i];
            dizi[i] = dizi[j];
            dizi[j] = gecici;

            i++;
            j--;
        }
    }

    if (bas < j)
    {
        Sirala(dizi, bas, j);
    }

    if (i < son)
    {
        Sirala(dizi, i, son);
    }
}
