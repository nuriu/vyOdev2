//------------------------------------------------------------------------------
// Dosya Adı:           main.cpp
// Dosya Açıklaması:    ana program dosyası
// Oluşturma Tarihi:    18.04.16
// Oluşturan:           Nuri Uzunoğlu
// Güncelleyenler:
//                      Nuri Uzunoğlu (18.04.16)
//
//------------------------------------------------------------------------------

#include <iostream>

//------------------------------------------------------------------------------
// KUYRUK SINIFLARI (1. Soru)
//------------------------------------------------------------------------------
#include <daireselkuyruk.hpp>
#include <onceliklikuyruk.hpp>

//------------------------------------------------------------------------------
// SIRALAMA SINIFLARI (2. Soru)
//------------------------------------------------------------------------------
#include <kabarciksiramala.hpp>
#include <eklemelisiralama.hpp>
#include <secmelisiralama.hpp>
#include <hizlisiralama.hpp>

using namespace std;

void birinciSoruA()
{
    DaireselKuyruk d;
    d.Listele();
}

void birinciSoruB()
{
    OncelikliKuyruk o;
    o.Listele();
}

void ikinciSoru()
{

}

int main(int argc, char *argv[])
{
    //birinciSoruA();
    //birinciSoruB();
    ikinciSoru();
    return 0;
}

