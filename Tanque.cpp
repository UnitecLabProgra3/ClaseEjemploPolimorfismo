#include "Tanque.h"

Tanque::Tanque(int hp, int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="Tanque";
    this->escudo_activado=false;
}

Tanque::~Tanque()
{
    //dtor
}
