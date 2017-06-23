#include "Jugador.h"

Jugador :: Jugador() : Personas() {

}

Jugador :: Jugador(string lugar_procedencia, string apodo, double dinero, string nombre, int edad, string id) : Personas(nombre, edad, id) {
	this -> lugar_procedencia = lugar_procedencia;
	this -> apodo = apodo;
	this -> dinero = dinero;
}

string Jugador :: getLugar_procedencia() {
   return lugar_procedencia;
}

void Jugador :: setLugar_procedencia(string lugar_procedencia) {
   this -> lugar_procedencia = lugar_procedencia;
}

string Jugador :: getApodo(){
   return apodo;
}

void Jugador :: setApodo(string apodo) {
   this -> apodo = apodo;
}

double Jugador :: getDinero() {
   return dinero;
}

void Jugador :: setDinero(double dinero) {
   this -> dinero = dinero;
}