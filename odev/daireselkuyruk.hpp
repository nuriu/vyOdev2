//------------------------------------------------------------------------------
// Dosya Adı:           daireselkuyruk.hpp
// Dosya Açıklaması:    dairesel kuyruk sınıfı
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//
//------------------------------------------------------------------------------


#ifndef DAIRESELKUYRUK_HPP
#define DAIRESELKUYRUK_HPP

#include <musteri.hpp>

class DaireselKuyruk
{
public:
    DaireselKuyruk();

    // kuyruk fonksiyonları
    void Ekle();
    int Cikart();
    void Gozat();

    void Listele();

private:
    // birinci soru için gerekli müşteri kuyruğu
    Musteri musteriler[20];
};

#endif // DAIRESELKUYRUK_HPP
