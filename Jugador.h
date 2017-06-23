#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador{
	protected:
		string lugar_procedencia;
		string apodo;
		double dinero;
	public:
		Jugador(string,string,double);
		Jugador();
		string getLugar_procedencia();
		void setLugar_procedencia(string);

		string getApodo();
		void setApodo(string);

		double getDinero();
		void setDinero(double);

};
#endif