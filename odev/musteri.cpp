//------------------------------------------------------------------------------
// Dosya Adı:           musteri.cpp
// Dosya Açıklaması:    müşteri sınıfının davranışları
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//
//------------------------------------------------------------------------------

#include <ctime>
#include <cstdlib>

#include <musteri.hpp>

Musteri::Musteri()
{
    islemSuresiUret();
}

void Musteri::islemSuresiUret()
{
    // 600'den küçük olan rastgele bir sayı üret
    int rastgeleSayi = (rand() % 600) + 1;

    // bu sayı 60'tan küçükse, küçük olduğu sürece bu sayının yerine
    // tekrar 600'dan küçük olan rastgele bir sayı üret
    while(rastgeleSayi<60)
        rastgeleSayi = (rand() % 600) + 1;

    // rastgele sayı 60'a eşit veya 60'dan büyük fakat 601'den küçük ise
    // müşterinin işlem süresine ata.
    this->islemSuresi = rastgeleSayi;
}
