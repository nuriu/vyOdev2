//------------------------------------------------------------------------------
// Dosya Adı:           musteri.hpp
// Dosya Açıklaması:    kuyrukta bekleyecek müşteriler için oluşturulan sınıf
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//------------------------------------------------------------------------------

#ifndef MUSTERI_HPP
#define MUSTERI_HPP


class Musteri
{
public:

    // müşteri özellikleri
    int numara;
    int islemSuresi;

    Musteri();

    void islemSuresiUret();
};

#endif // MUSTERI_HPP
