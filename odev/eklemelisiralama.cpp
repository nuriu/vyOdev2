//------------------------------------------------------------------------------
// Dosya Adı:           eklemelisiralama.hpp
// Dosya Açıklaması:    eklemeli sıralama sınıfının sıralama davranışı
// Oluşturma Tarihi:    19.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (19.04.16)
//
//------------------------------------------------------------------------------

#include <eklemelisiralama.hpp>

EklemeliSiralama::EklemeliSiralama()
{

}

void EklemeliSiralama::Sirala(int dizi[], int dizininBoyutu)
{
    int i, j, gecici;
    for (i = 0; i < dizininBoyutu; i++)
    {
        j = i;
        while (j > 0 && dizi[j - 1] > dizi[j])
        {
            gecici = dizi[j];
            dizi[j] = dizi[j - 1];
            dizi[j - 1] = gecici;
            j--;
        }
    }
}
