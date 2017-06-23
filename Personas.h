#include <iostream>
#include <string>
#include <vector>

#ifndef PERSONAS_H
#define PERSONAS_H

using namespace std;

class Personas{
	protected:
		string nombre;
		int edad;
		string id;
	public:
		Personas();
		Personas(string,int,string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getId();
		void setId(string);
};
#endif