#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <iostream>
using namespace std;

class Personaje
{
    public:
        int hp;
        int puntos_de_ataque;
        string tipo;
        Personaje();
        Personaje(int hp,int puntos_de_ataque,string tipo);
        virtual void imprimir();
        void recibirAtaque(int ataque);
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
