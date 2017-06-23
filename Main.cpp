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
	vector<Repartidor*> lista_repartidor;
	vector<Mesas*> lista_mesas;
	vector<Cartas*> lista_cartas;
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
			if (op_persona == 1) { //Administrador
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
			if (op_persona == 2) { //Jugador
				cout << "Ingrese el nombre: ";
				cin >> nombre;
				cout << "Ingrese la edad: ";
				cin >> edad;
				while (id.size() != 4){
					cout << "Ingrese el número de identidad (4 números): ";
					cin >> id;
				}
				cout << "Ingrese su lugar de procedencia: ";
				cin >> lugar_procedencia;
				cout << "Ingrese su apodo en el casino: ";
				cin >> apodo;
				cout << "Ingrese el monto total de dinero que lleva: ";
				cin >> dinero;
				lista_jugador.push_back(new Jugador(lugar_procedencia, apodo, dinero, nombre, edad, id));
			}
			if (op_persona == 3) { //Repartidor
				int cont;
				string todo;
				stringstream cant_num;
				cout << "Ingrese el nombre: ";
				cin >> nombre;
				cout << "Ingrese la edad: ";
				cin >> edad;
				while (id.size() != 4){
					cout << "Ingrese el número de identidad (4 números): ";
					cin >> id;
				}
				cout << "Ingrese la dificultad como repartidor (difícil, intermedio, fácil): ";
				cin >> dificultad;
				cout << "Ingrese el dinero dado por el casino: ";
				cin >> dinero_casino;
				cont = 2;
				for (int j = 0; j < 9; j++) {
					cant_num << cont;
					todo = cant_num.str();
					lista_cartas.push_back(new Cartas(todo, "♠", "Negro"));
					lista_cartas.push_back(new Cartas(todo, "♥", "Rojo"));
					lista_cartas.push_back(new Cartas(todo, "♣", "Negro"));
					lista_cartas.push_back(new Cartas(todo, "♦", "Rojo"));
					cont++;
				}	
				lista_cartas.push_back(new Cartas("A", "♠", "Negro"));
				lista_cartas.push_back(new Cartas("J", "♥", "Rojo"));
				lista_cartas.push_back(new Cartas("Q", "♣", "Negro"));
				lista_cartas.push_back(new Cartas("K", "♦", "Rojo"));
				
				baraja = new Baraja(lista_cartas);
				lista_repartidor.push_back(new Repartidor(dificultad, dinero_casino, baraja, nombre, edad, id));
			}
		}
		if (opcion == 2) { //LogIn
			int op_login;
			string nombre, id;
			cout << endl;
			cout << "	MENU LOGIN	" << endl
				<< "1.- Administrador" << endl
				<< "2.- Jugador" << endl;
			cout << "Ingrese la opción que desea ejecutar: ";
			cin >> op_login;
			cout << "Ingrese el Nombre: ";
			cin >> nombre;
			cout << "Ingrese el número de identidad: ";
			cin >> id;
			if (op_login == 1) { //LogIn Administrador
				for (int i = 0;  i < lista_admin.size(); i++) {
					if (lista_admin.at(i) -> getNombre() == nombre && lista_admin.at(i) -> getId() == id) {
						char resp;
						do {
							int op_admin;
							//Mesas
							int numero, pos_rep, pos_jug;
							string tipo;
							Repartidor* repartidor;
							Jugador* jugador;
							cout << endl;
							cout << "	MENU ADMINISTRADOR	" << endl
								<< "1.- Agregar Mesa de BlackJack" << endl
								<< "2.- Modificar Mesa de BlackJack" << endl
								<< "3.- Eliminar Mesa de BlackJack" << endl;
							cout << "Ingrese la opción que desea ejecutar: ";
							cin >> op_admin;
							if (op_admin == 1) { //Agregar
								cout << "Ingrese el número de la mesa: ";
								cin >> numero;
								cout << "Ingrese el tipo  de mesa (VIP, Clásica, Viajero): ";
								cin >> tipo;
								for (int j = 0; j < lista_repartidor.size(); j++) {
									cout << j << " ---> " << lista_repartidor.at(j) -> getNombre() << endl;
								}
								cout << "Ingrese la posición del Repartidor que desea agregar a la mesa: ";
								cin >> pos_rep;
								repartidor = lista_repartidor.at(pos_rep);
								for (int j = 0; j < lista_jugador.size(); j++) {
									cout << j << " ---> " << lista_jugador.at(j) -> getNombre() << endl;
								}
								cout << "Ingrese la posición del Jugador que desea agregar a la mesa: ";
								cin >> pos_jug;
								jugador = lista_jugador.at(pos_jug);
								lista_mesas.push_back(new Mesas(numero, tipo, repartidor, jugador));
							}
							if (op_admin == 2) { //Modificar
								int pos;
								for (int j = 0; j < lista_mesas.size(); j++) {
									cout << j << " ---> " << lista_mesas.at(j) -> getNumero() << endl;
									cout << j << " ---> " << lista_mesas.at(j) -> getTipo() << endl;
									cout << j << " ---> " << lista_mesas.at(j) -> getRepartidor() << endl;
									cout << j << " ---> " << lista_mesas.at(j) -> getJugador() << endl;
			   					}
								cout << "Ingrese la posición que desea modificar: ";
								cin >> pos;

								cout << "Ingrese el número de la mesa: ";
								cin >> numero;
								cout << "Ingrese el tipo  de mesa (VIP, Clásica, Viajero): ";
								cin >> tipo;
								for (int j = 0; j < lista_repartidor.size(); j++) {
									cout << j << " ---> " << lista_repartidor.at(j) -> getNombre() << endl;
								}
								cout << "Ingrese la posición del Repartidor que desea agregar a la mesa: ";
								cin >> pos_rep;
								repartidor = lista_repartidor.at(pos_rep);
								for (int j = 0; j < lista_jugador.size(); j++) {
									cout << j << " ---> " << lista_jugador.at(j) -> getNombre() << endl;
								}
								cout << "Ingrese la posición del Jugador que desea agregar a la mesa: ";
								cin >> pos_jug;
								jugador = lista_jugador.at(pos_jug);
								lista_mesas.at(pos) -> setNumero(numero);
								lista_mesas.at(pos) -> setTipo(tipo);
								lista_mesas.at(pos) -> setRepartidor(repartidor);
								lista_mesas.at(pos) -> setJugador(jugador);
							}
							if (op_admin == 3) { //Eliminar
								int pos;
								for (int j = 0; j < lista_mesas.size(); j++) {
									cout << j << " ---> " << lista_mesas.at(j) -> getNumero() << endl;
									cout << j << " ---> " << lista_mesas.at(j) -> getTipo() << endl;
									cout << j << " ---> " << lista_mesas.at(j) -> getRepartidor() << endl;
									cout << j << " ---> " << lista_mesas.at(j) -> getJugador() << endl;
			   					}
								cout << "Ingrese la posición que desea eliminar: ";
								cin >> pos;
								lista_mesas.erase(lista_mesas.begin() + pos);
								cout << "Mesa eliminada exitosamente" << endl;
							}
							cout << "Desea cerrar sesión? [s/n]: ";
							cin >> resp;
						} while (resp != 's');
					} //Fin if LogIn
				} //Fin for lista_admin
			}
			if (op_login == 2) { //LogIn Jugador
				for (int i = 0; i < lista_jugador.size(); i++) {
					if (lista_jugador.at(i) -> getNombre() == nombre && lista_jugador.at(i) -> getId() == id) {
						cout << "Bienvenido al Casino!" << endl;
					} //Fin if
				} //Fin for lista_jugador
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