#include "Jugador.h"

Jugador::Jugador(string lugar_procedencia,string apodo,double dinero){
	this->lugar_procedencia=lugar_procedencia;
	this->apodo=apodo;
	this->dinero=dinero;
}
Jugador::Jugador(){

}void Jugador::setLugar_procedencia(string lugar_procedencia){
   this-> lugar_procedencia=lugar_procedencia;
}
string Jugador::getLugar_procedencia(){
   return lugar_procedencia;
}
void Jugador::setApodo(string apodo){
   this-> apodo=apodo;
}
string Jugador::getApodo(){
   return apodo;
}
void Jugador::setDinero(double dinero){
   this-> dinero=dinero;
}
double Jugador::getDinero(){
   return dinero;
}
