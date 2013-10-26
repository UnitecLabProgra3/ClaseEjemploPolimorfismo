#include "Personaje.h"

Personaje::Personaje()
{
    //ctor
}

Personaje::~Personaje()
{
    //dtor
}

Personaje::Personaje(int hp,int puntos_de_ataque,string tipo)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo=tipo;
}

void Personaje::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}

void Personaje::recibirAtaque(int ataque)
{
    hp-=ataque;
}
