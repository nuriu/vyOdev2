//------------------------------------------------------------------------------
// Dosya Adı:           daireselkuyruk.hpp
// Dosya Açıklaması:    dairesel kuyruk sınıfının davranışları
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                      Kadir Sefa Ünal (25.04.16)
//------------------------------------------------------------------------------

#include <iostream>
#include <daireselkuyruk.hpp>

using namespace std;

DaireselKuyruk::DaireselKuyruk()
{
    // kuyruktaki müşterilere numara atanması
    for (int i = 0; i < 20; ++i)
    {
        this->musteriler[i].numara = i + 1;
    }
}

void DaireselKuyruk::Listele()
{
    cout << "\nDairesel Kuyruktaki Müşteriler:" << endl;
    for (int i = 0; i < 20; ++i)
        cout << this->musteriler[i].numara << ": " << this->musteriler[i].islemSuresi << endl;
}
