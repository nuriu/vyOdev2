//------------------------------------------------------------------------------
// Dosya Adı:           daireselkuyruk.hpp
// Dosya Açıklaması:    dairesel kuyruk sınıfının davranışları
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                      Kadir Sefa Ünal (25.04.16)
//                                      (26.04.16)
//------------------------------------------------------------------------------

#include <iostream>
#include <daireselkuyruk.hpp>

using namespace std;

DaireselKuyruk::DaireselKuyruk()
{
    this->boyut = 20;
}

void DaireselKuyruk::Ekle(Musteri musteri)
{
    if(miktar == boyut)
        cout << "Kuyruk dolu!";

    if(on == -1)
        on = 0;

    if(arka == boyut - 1)
    {
        arka = 0;
        musteriler[arka] = musteri;
    }
    else
    {
        arka++;
        musteriler[arka] = musteri;
    }
    miktar++;
}
Musteri DaireselKuyruk::Cikart()
{
    if(BosMu())
        cout << "Kuyruk boş!";

    Musteri gecici = this->musteriler[on];
    Musteri mus;
    this->musteriler[on] = mus;

    if(on == boyut - 1)
        on = 0;
    else
        on++;

    miktar--;
    return gecici;
}
Musteri DaireselKuyruk::Gozat()
{
    return this->musteriler[on];
}

bool DaireselKuyruk::BosMu()
{
    return (miktar == 0);
}

void DaireselKuyruk::Listele()
{
    cout << "\nDairesel Kuyruktaki Müşteriler:" << endl;
    for (int i = 0; i < 20; ++i)
        cout << this->musteriler[i].numara << "\t: "
             << this->musteriler[i].islemSuresi << endl;
}
