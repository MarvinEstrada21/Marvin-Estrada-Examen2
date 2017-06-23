#include <iostream>
#include <string>
#include <vector>
#include "Repartidor.h"
#include "Jugador.h"

#ifndef MESAS_H
#define MESAS_H

using namespace std;

class Mesas {
	private:
		int numero;
		string tipo;
		Repartidor* repartidor;
		Jugador* jugador;
	public:
		Mesas();
		Mesas(int, string, Repartidor*, Jugador*);
		
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