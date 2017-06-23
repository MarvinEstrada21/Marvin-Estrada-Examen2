#include <iostream>
#include <string>
#include <vector>
#include "Baraj.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor{
	protected:
		string dificultad;
		double dinero;
		Baraja* baraja;
	public:
		Repartidor(string,double,Baraja*);
		Repartidor();
		string getDificultad();
		void setDificultad(string);

		double getDinero();
		void setDinero(double);

		Baraja* getBaraja();
		void setBaraja(Baraja*);

};
#endif