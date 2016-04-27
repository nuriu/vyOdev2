//------------------------------------------------------------------------------
// Dosya Adı:           onceliklikuyruk.hpp
// Dosya Açıklaması:    öncelikli kuyruk sınıfı
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                      Kadir Sefa ÜNAL (26.05.16)
//------------------------------------------------------------------------------

#ifndef ONCELIKLIKUYRUK_HPP
#define ONCELIKLIKUYRUK_HPP

#include <musteri.hpp>

class OncelikliKuyruk
{
public:
    OncelikliKuyruk();

    // kuyruk fonksiyonları
    void EkleBuyuktenKucuge(Musteri musteri);
    void EkleKucuktenBuyuge(Musteri musteri);
    Musteri Cikart();
    Musteri Gozat();
    bool BosMu();
    void Listele();

private:
    int on = -1;
    int boyut = 0;
    int miktar = 0;

    // birinci soru için gerekli müşteri kuyruğu
    Musteri musteriler[20];
};

#endif // ONCELIKLIKUYRUK_HPP
