//------------------------------------------------------------------------------
// Dosya Adı:           kuyruk.hpp
// Dosya Açıklaması:    oluşturulacak kuyruk sınıflarına iskelet sağlama amaçlı
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//
//------------------------------------------------------------------------------

#ifndef KUYRUK_HPP
#define KUYRUK_HPP

#include <musteri.hpp>

class Kuyruk
{
public:
    Kuyruk();

    // kuyruk fonksiyonları
    void Ekle();
    int Cikart();
    void Gozat();

private:
    // birinci soru için gerekli müşteri kuyruğu
    Musteri musteriler[];
};

#endif // KUYRUK_HPP
