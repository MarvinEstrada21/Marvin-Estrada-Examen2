#include <iostream>
#include <string>
#include <vector>
#include "Cartas.h"

#ifndef BARAJA_H
#define BARAJA_H

using namespace std;

class Baraja {
	private:
		vector<Cartas*> cartas;
	public:
		Baraja();
		Baraja(vector<Cartas*>);
		
		vector<Cartas*> getCartas();
		void setCartas(Cartas*);
};
#endif