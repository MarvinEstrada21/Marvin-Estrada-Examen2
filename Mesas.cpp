#include "Mesas.h"

Mesas::Mesas(int numero,string tipo,Repartidor* repartidor,Jugador* jugador){
	this->numero=numero;
	this->tipo=tipo;
	this->repartidor=repartidor;
	this->jugador=jugador;
}
Mesas::Mesas(){

}void Mesas::setNumero(int numero){
   this-> numero=numero;
}
int Mesas::getNumero(){
   return numero;
}
void Mesas::setTipo(string tipo){
   this-> tipo=tipo;
}
string Mesas::getTipo(){
   return tipo;
}
void Mesas::setRepartidor(Repartidor* repartidor){
   this-> repartidor=repartidor;
}
Repartidor* Mesas::getRepartidor(){
   return repartidor;
}
void Mesas::setJugador(Jugador* jugador){
   this-> jugador=jugador;
}
Jugador* Mesas::getJugador(){
   return jugador;
}
