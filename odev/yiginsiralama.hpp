//------------------------------------------------------------------------------
// Dosya Adı:           yiginsiralama.hpp
// Dosya Açıklaması:    yığın sıralama sınıfı
// Oluşturma Tarihi:    20.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (20.04.16)
//
//------------------------------------------------------------------------------

#ifndef YIGINSIRALAMA_HPP
#define YIGINSIRALAMA_HPP


class YiginSiralama
{
public:
    YiginSiralama();

    // yığın sıralama davranışları
    void Obekle(int* dizi, int alt, int ust);
    void SagaKaydir(int* dizi, int alt, int ust);
    void Sirala(int* dizi, int dizininBoyutu);
};

#endif // YIGINSIRALAMA_HPP
