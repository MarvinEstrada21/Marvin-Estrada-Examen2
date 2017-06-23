#include "Cartas.h"

Cartas :: Cartas(){

}

Cartas :: Cartas(string valor, string simbolo, string color){
	this -> valor = valor;
	this -> simbolo = simbolo;
	this -> color = color;
}

string Cartas :: getValor() {
   return valor;
}

void Cartas :: setValor(string valor) {
   this -> valor = valor;
}

string Cartas :: getSimbolo() {
   return simbolo;
}

void Cartas :: setSimbolo(string simbolo) {
   this -> simbolo = simbolo;
}

string Cartas :: getColor() {
   return color;
}

void Cartas :: setColor(string color) {
   this -> color = color;
}