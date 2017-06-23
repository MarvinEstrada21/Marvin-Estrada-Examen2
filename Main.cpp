#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>

#include "Personas.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Cartas.h"
#include "Baraja.h"
#include "Jugador.h"
#include "Mesas.h"

using namespace std;

int main(){
	vector<Administrador*> lista_admin;
	vector<Jugador*> lista_jugador;
	int opcion;
	cout << "	MENU DE CASINO	" << endl
		<< "1.- Agregar Persona" << endl
		<< "2.- LogIn" << endl
		<< "3.- Salir" << endl;
	cout << "Ingrese la opción que desea ejecutar: ";
	cin >> opcion;
	while (opcion != 3){
		if (opcion == 1) {
			int op_persona;
			//Admin
			string nombre, id, rango_laboral;
			int edad, exp_laboral;
			double sueldo;
			//Jugador
			string lugar_procedencia, apodo;
			double dinero;
			//Repartidor
			string dificultad; 
			double dinero_casino; 
			Baraja* baraja;
			cout << endl;
			cout << "	AGREGAR NUEVA PERSONA	" << endl
				<< "1.- Administrador" << endl
				<< "2.- Jugador" << endl
				<< "3.- Repartidor" << endl;
			cout << "Ingrese la persona que desea agregar: ";
			cin >> op_persona;
			if (op_persona == 1) {
				cout << "Ingrese el nombre: ";
				cin >> nombre;
				cout << "Ingrese la edad: ";
				cin >> edad;
				while (id.size() != 4){
					cout << "Ingrese el número de identidad (4 números): ";
					cin >> id;
				}
				cout << "Ingrese la experiencia laboral (años de trabajo en otros casinos): ";
				cin >> exp_laboral;
				cout << "Ingrese el rango de administrador propuesto a trabajar (Tiempo Completo, Medio-Tiempo, Gerente General): ";
				cin >> rango_laboral;
				cout << "Ingrese el sueldo propuesto a ganar: ";
				cin >> sueldo;
				lista_admin.push_back(new Administrador(exp_laboral, rango_laboral, sueldo, nombre, edad, id));
			}
			if (op_persona == 2) {
				cout << "Ingrese el nombre: ";
				cin >> nombre;
				cout << "Ingrese la edad: ";
				cin >> edad;
				cout << "Ingrese el número de identidad: ";
				cin >> id;
				cout << "Ingrese su lugar de procedencia: ";
				cin >> lugar_procedencia;
				cout << "Ingrese su apodo en el casino: ";
				cin >> apodo;
				cout << "Ingrese el monto total de dinero que lleva: ";
				cin >> dinero;
				lista_jugador.push_back(new Jugador(lugar_procedencia, apodo, dinero, nombre, edad, id));
			}
			if (op_persona == 3) {
				cout << "Ingrese el nombre: ";
				cin >> nombre;
				cout << "Ingrese la edad: ";
				cin >> edad;
				cout << "Ingrese el número de identidad: ";
				cin >> id;
			}
		}
		if (opcion == 2) {
			int op_login;
			string nombre, id;
			cout << "	MENU LOGIN	" << endl
				<< "1.- Administrador" << endl
				<< "2.- Jugador" << endl;
			cout << "Ingrese la opción que desea ejecutar: ";
			cin >> op_login;
			cout << "Ingrese el Nombre: ";
			cin >> nombre;
			cout << "Ingrese el número de identidad: ";
			cin >> id;
			if (op_login == 1) {
				for (int i = 0;  i < lista_admin.size(); i++) {
					if (lista_admin.at(i) -> getNombre() == nombre && lista_admin.at(i) -> getId() == id) {
						cout << "Pollo";
					}
				}
			}
			if (op_login == 2) {

			}
		}
		cout << endl;
		cout << "	MENU DE CASINO	" << endl
			<< "1.- Agregar Persona" << endl
			<< "2.- LogIn" << endl
			<< "3.- Salir" << endl;
		cout << "Ingrese la opción que desea ejecutar: ";
		cin >> opcion;
	}
	return 0;
}

string PLAleatorio() {
	int random;
	stringstream aleat;
	string aleat2;
	for (int i = 0; i < 52; ++i) {
		random = rand() % 11 + 0;
		if (random == 0){
			aleat << "A";
		} else if (random == 1){
			aleat << "B";
		} else if (random == 2){
			aleat << "C";
		} else if (random == 3){
			aleat << "D";
		} else {
			aleat << random;
		}
	}
	aleat2 = aleat.str();
	return aleat2;
}