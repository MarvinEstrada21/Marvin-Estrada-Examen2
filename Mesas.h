#include <iostream>
#include <string>
#include <vector>
#include "Repartido.h"
#include "Jugado.h"

using namespace std;

#ifndef MESAS_H
#define MESAS_H
class Mesas{
	protected:
		int numero;
		string tipo;
		Repartidor* repartidor;
		Jugador* jugador;
	public:
		Mesas(int,string,Repartidor*,Jugador*);
		Mesas();
		int getNumero();
		void setNumero(int);

		string getTipo();
		void setTipo(string);

		Repartidor* getRepartidor();
		void setRepartidor(Repartidor*);

		Jugador* getJugador();
		void setJugador(Jugador*);

};
#endif