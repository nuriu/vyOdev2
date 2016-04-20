//------------------------------------------------------------------------------
// Dosya Adı:           yiginsiralama.cpp
// Dosya Açıklaması:    yığın sıralama sınıfının davranışları
// Oluşturma Tarihi:    20.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (20.04.16)
//
//------------------------------------------------------------------------------

#include <assert.h>
#include <yiginsiralama.hpp>

YiginSiralama::YiginSiralama()
{

}

void YiginSiralama::Obekle(int* dizi, int alt, int ust)
{
    int orta = (ust - alt - 1) / 2;

    while (orta >= 0)
    {
        SagaKaydir(dizi, orta, ust);
        --orta;
    }
}

void YiginSiralama::SagaKaydir(int* dizi, int alt, int ust)
{
    int kok = alt;

    while ((kok * 2) + 1 <= ust)
    {
        int sol = (kok * 2) + 1;
        int sag = sol + 1;
        int takas = kok;

        if (dizi[takas] < dizi[sol])
        {
            takas = sol;
        }

        if ((sag <= ust) && (dizi[takas] < dizi[sag]))
        {
            takas = sag;
        }

        if (takas != kok)
        {
            int gecici = dizi[kok];
            dizi[kok] = dizi[takas];
            dizi[takas] = gecici;
            kok = takas;
        }
        else
        {
            break;
        }
    }
}

void YiginSiralama::Sirala(int* dizi, int dizininBoyutu)
{
    assert(dizi);
    assert(dizininBoyutu > 0);

    Obekle(dizi, 0, dizininBoyutu - 1);

    int ust = dizininBoyutu - 1;

    while (ust > 0)
    {
        int gecici = dizi[ust];
        dizi[ust] = dizi[0];
        dizi[0] = gecici;

        --ust;

        SagaKaydir(dizi, 0, ust);
    }
}
