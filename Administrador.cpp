#include "Administrador.h"

Administrador :: Administrador() : Personas() {

}

Administrador :: Administrador(int exp_laboral, string rango_admin, double sueldo, string nombre, int edad, string id) : Personas(nombre, edad, id) {
	this -> exp_laboral = exp_laboral;
	this -> rango_admin = rango_admin;
	this -> sueldo = sueldo;
}

int Administrador :: getExp_laboral() {
   return exp_laboral;
}

void Administrador :: setExp_laboral(int exp_laboral){
   this -> exp_laboral = exp_laboral;
}

string Administrador :: getRango_admin() {
   return rango_admin;
}

void Administrador :: setRango_admin(string rango_admin) {
   this -> rango_admin = rango_admin;
}

double Administrador :: getSueldo() {
   return sueldo;
}

void Administrador :: setSueldo(double sueldo) {
   this -> sueldo = sueldo;
}