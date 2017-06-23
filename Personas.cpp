#include "Personas.h"

Personas :: Personas() {

}

Personas :: Personas(string nombre, int edad, string id) {
	this -> nombre = nombre;
	this -> edad = edad;
	this -> id = id;
}

string Personas :: getNombre() {
   return nombre;
}

void Personas :: setNombre(string nombre) {
   this -> nombre = nombre;
}

int Personas :: getEdad() {
   return edad;
}

void Personas :: setEdad(int edad) {
   this -> edad = edad;
}

string Personas :: getId() {
   return id;
}

void Personas :: setId(string id){
   this -> id = id;
}