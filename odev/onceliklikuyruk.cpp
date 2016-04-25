//------------------------------------------------------------------------------
// Dosya Adı:           onceliklikuyruk.cpp
// Dosya Açıklaması:    öncelikli kuyruk sınıfının davranışları
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu   (18.04.16)
//                      Kadir Sefa Ünal (25.04.16)
//------------------------------------------------------------------------------

#include <iostream>
#include <onceliklikuyruk.hpp>

using namespace std;

OncelikliKuyruk::OncelikliKuyruk()
{
    // kuyruktaki müşterilere numara atanması
    for (int i = 0; i < 20; ++i)
    {
        this->musteriler[i].numara = i + 1;
    }

}

void OncelikliKuyruk::Listele()
{
    cout << "\nÖncelikli Kuyruktaki Müşteriler:" << endl;
    for (int i = 0; i < 20; ++i)
        cout << this->musteriler[i].numara << ": " << this->musteriler[i].islemSuresi << endl;
}
