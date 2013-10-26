#include <iostream>
#include <vector>
using namespace std;

#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"

int main()
{
    vector<Personaje*>personajes;

    personajes.push_back(new Personaje(90,30,"Guerrero"));
    personajes.push_back(new Curador(70,10,15));
    personajes.push_back(new Tanque(200,3));

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }

    return 0;
}
