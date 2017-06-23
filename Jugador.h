#include <iostream>
#include <string>
#include <vector>
#include "Personas.h"

#ifndef JUGADOR_H
#define JUGADOR_H

using namespace std;

class Jugador : public Personas{
	private:
		string lugar_procedencia;
		string apodo;
		double dinero;
	public:
		Jugador();
		Jugador(string, string, double, string, int, string);

		string getLugar_procedencia();
		void setLugar_procedencia(string);

		string getApodo();
		void setApodo(string);

		double getDinero();
		void setDinero(double);
};
#endif