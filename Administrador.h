#include <iostream>
#include <string>
#include <vector>
#include "Personas.h"

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

using namespace std;

class Administrador : public Personas {
	private:
		int exp_laboral;
		string rango_admin;
		double sueldo;
	public:
		Administrador();
		Administrador(int,string,double, string, int, string);
		
		int getExp_laboral();
		void setExp_laboral(int);

		string getRango_admin();
		void setRango_admin(string);

		double getSueldo();
		void setSueldo(double);
};
#endif