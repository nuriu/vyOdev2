//------------------------------------------------------------------------------
// Dosya Adı:           secmelisiralama.cpp
// Dosya Açıklaması:    seçmeli sıralama sınıfının sıralama davranışı
// Oluşturma Tarihi:    19.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (19.04.16)
//
//------------------------------------------------------------------------------

#include <secmelisiralama.hpp>

SecmeliSiralama::SecmeliSiralama()
{

}

void SecmeliSiralama::Sirala(int dizi[], int dizininBoyutu)
{
    int i, j, enKucukIndis, gecici;

    for (i = 0; i < dizininBoyutu - 1; i++)
    {
        enKucukIndis = i;

        for (j = i + 1; j < dizininBoyutu; j++)
        {
            if (dizi[j] < dizi[enKucukIndis])
            {
                enKucukIndis = j;
            }
        }

        if (enKucukIndis != i)
        {
            gecici = dizi[i];
            dizi[i] = dizi[enKucukIndis];
            dizi[enKucukIndis] = gecici;
        }
    }
}
