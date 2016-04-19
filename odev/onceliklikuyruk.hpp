//------------------------------------------------------------------------------
// Dosya Adı:           onceliklikuyruk.hpp
// Dosya Açıklaması:    öncelikli kuyruk sınıfı
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//
//------------------------------------------------------------------------------

#ifndef ONCELIKLIKUYRUK_HPP
#define ONCELIKLIKUYRUK_HPP

#include <musteri.hpp>

class OncelikliKuyruk
{
public:
    OncelikliKuyruk();

    // kuyruk fonksiyonları
    void Ekle();
    int Cikart();
    void Gozat();

    void Listele();

private:
    // birinci soru için gerekli müşteri kuyruğu
    Musteri musteriler[20];
};

#endif // ONCELIKLIKUYRUK_HPP
