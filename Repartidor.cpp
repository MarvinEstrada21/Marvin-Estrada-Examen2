#include "Repartidor.h"

Repartidor::Repartidor(string dificultad,double dinero,Baraja* baraja){
	this->dificultad=dificultad;
	this->dinero=dinero;
	this->baraja=baraja;
}
Repartidor::Repartidor(){

}void Repartidor::setDificultad(string dificultad){
   this-> dificultad=dificultad;
}
string Repartidor::getDificultad(){
   return dificultad;
}
void Repartidor::setDinero(double dinero){
   this-> dinero=dinero;
}
double Repartidor::getDinero(){
   return dinero;
}
void Repartidor::setBaraja(Baraja* baraja){
   this-> baraja=baraja;
}
Baraja* Repartidor::getBaraja(){
   return baraja;
}
