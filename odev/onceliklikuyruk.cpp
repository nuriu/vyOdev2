//------------------------------------------------------------------------------
// Dosya Adı:           onceliklikuyruk.cpp
// Dosya Açıklaması:    öncelikli kuyruk sınıfının davranışları
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                      Kadir Sefa Ünal (25.04.16)
//                                      (26.04.16)
//------------------------------------------------------------------------------

#include <iostream>
#include <onceliklikuyruk.hpp>

using namespace std;

OncelikliKuyruk::OncelikliKuyruk()
{
    this->boyut = 20;
}

void OncelikliKuyruk::EkleKucuktenBuyuge(Musteri musteri)
{
    if(miktar == boyut)
        cout << "Kuyruk dolu!";
    if(BosMu())
    {
        on++;
        musteriler[on] = musteri;
        miktar++;
    }
    else
    {
        int i;
        for(i = (miktar - 1); i >= 0; i--)
        {
            if(musteri.islemSuresi > this->musteriler[i].islemSuresi)
                this->musteriler[i + 1] = this->musteriler[i];
            else
                break;
        }
        this->musteriler[i + 1] = musteri;
        on++;
        miktar++;
    }
}

void OncelikliKuyruk::EkleBuyuktenKucuge(Musteri musteri)
{
    if(miktar == boyut)
        cout << "Kuyruk dolu!";
    if(BosMu())
    {
        on++;
        musteriler[on] = musteri;
        miktar++;
    }
    else
    {
        int i;
        for(i = (miktar - 1); i >= 0; i--)
        {
            if(musteri.islemSuresi < this->musteriler[i].islemSuresi)
                this->musteriler[i + 1] = this->musteriler[i];
            else
                break;
        }
        this->musteriler[i + 1] = musteri;
        on++;
        miktar++;
    }
}

Musteri OncelikliKuyruk::Cikart()
{
    if(BosMu())
        cout << "Kuyruk boş!";
    Musteri gecici = this->musteriler[on];
    Musteri mus;
    this->musteriler[on] = mus;
    on--;
    miktar--;
    return gecici;
}

Musteri OncelikliKuyruk::Gozat()
{
    return this->musteriler[on];
}

bool OncelikliKuyruk::BosMu()
{
    return (miktar == 0);
}


void OncelikliKuyruk::Listele()
{
    cout << "\nÖncelikli Kuyruktaki Müşteriler:" << endl;
    for (int i = 19; i >= 0; i--)
        cout << this->musteriler[i].numara << "\t: "
             << this->musteriler[i].islemSuresi << endl;
}
