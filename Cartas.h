#include <iostream>
#include <string>
#include <vector>

#ifndef CARTAS_H
#define CARTAS_H

using namespace std;

class Cartas {
	private:
		string valor;
		string simbolo;
		string color;
	public:
		Cartas();
		Cartas(string,string,string);
		
		string getValor();
		void setValor(string);

		string getSimbolo();
		void setSimbolo(string);

		string getColor();
		void setColor(string);
};
#endif