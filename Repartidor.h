#include <iostream>
#include <string>
#include <vector>
#include "Baraja.h"
#include "Personas.h"

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

using namespace std;

class Repartidor : public Personas {
	private:
		string dificultad;
		double dinero;
		Baraja* baraja;
	public:
		Repartidor();
		Repartidor(string, double, Baraja*, string, int, string);
		
		string getDificultad();
		void setDificultad(string);

		double getDinero();
		void setDinero(double);

		Baraja* getBaraja();
		void setBaraja(Baraja*);
};
#endif