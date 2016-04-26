//------------------------------------------------------------------------------
// Dosya Adı:           daireselkuyruk.hpp
// Dosya Açıklaması:    dairesel kuyruk sınıfı
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                      Kadir Sefa ÜNAL (25.05.16)
//                                      (26.04.16)
//------------------------------------------------------------------------------

#ifndef DAIRESELKUYRUK_HPP
#define DAIRESELKUYRUK_HPP

#include <musteri.hpp>

class DaireselKuyruk
{
public:
    DaireselKuyruk();

    // kuyruk fonksiyonları
    void Ekle(Musteri musteri);
    Musteri Cikart();
    Musteri Gozat();
    bool BosMu();
    void Listele();


private:
    int on = -1;
    int arka = -1;
    int boyut = 0;
    int miktar = 0;

    // birinci soru için gerekli müşteri kuyruğu
    Musteri musteriler[20];
};

#endif // DAIRESELKUYRUK_HPP
