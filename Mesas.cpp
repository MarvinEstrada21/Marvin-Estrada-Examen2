#include "Mesas.h"

Mesas :: Mesas() {

}

Mesas :: Mesas(int numero, string tipo, Repartidor* repartidor, Jugador* jugador) {
   this -> numero = numero;
   this -> tipo = tipo;
   this -> repartidor = repartidor;
   this -> jugador = jugador;
}

int Mesas :: getNumero() {
   return numero;
}

void Mesas :: setNumero(int numero) {
   this -> numero = numero;
}

string Mesas :: getTipo() {
   return tipo;
}

void Mesas :: setTipo(string tipo) {
   this -> tipo = tipo;
}

Repartidor* Mesas :: getRepartidor() {
   return repartidor;
}

void Mesas :: setRepartidor(Repartidor* repartidor) {
   this -> repartidor = repartidor;
}

Jugador* Mesas :: getJugador() {
   return jugador;
}

void Mesas :: setJugador(Jugador* jugador) {
   this -> jugador = jugador;
}