#include "Baraja.h"

Baraja :: Baraja() {

}

Baraja :: Baraja(vector<Cartas*> cartas) {
	this -> cartas = cartas;
}

vector<Cartas*> Baraja :: getCartas() {
   return cartas;
}

void Baraja :: setCartas(Cartas* Ccartas) {
   this-> cartas.push_back(Ccartas);
}