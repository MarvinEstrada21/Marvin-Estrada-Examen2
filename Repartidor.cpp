#include "Repartidor.h"

Repartidor :: Repartidor() : Personas() {

}

Repartidor :: Repartidor(string dificultad, double dinero, Baraja* baraja, string nombre, int edad, string id) : Personas(nombre, edad, id){
	this -> dificultad = dificultad;
	this -> dinero = dinero;
	this -> baraja = baraja;
}

string Repartidor :: getDificultad() {
   return dificultad;
}

void Repartidor :: setDificultad(string dificultad) {
   this -> dificultad = dificultad;
}

double Repartidor :: getDinero() {
   return dinero;
}

void Repartidor :: setDinero(double dinero) {
   this -> dinero = dinero;
}

Baraja* Repartidor :: getBaraja() {
   return baraja;
}

void Repartidor :: setBaraja(Baraja* baraja) {
   this -> baraja = baraja;
}