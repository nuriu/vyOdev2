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

#include <daireselkuyruk.hpp>
#include <onceliklikuyruk.hpp>

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
    birinciSoruA();
    birinciSoruB();
    //ikinciSoru();
    return 0;
}

