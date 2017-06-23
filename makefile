Main:   Main.cpp Personas.o Administrador.o Repartidor.o Cartas.o Baraja.o Jugador.o Mesas.o 
	g++ Main.cpp Personas.o Administrador.o Repartidor.o Cartas.o Baraja.o Jugador.o Mesas.o -o Main

main.o:	Main.cpp Personas.h Administrador.h Repartidor.h Cartas.h Baraja.h Jugador.h Mesas.h 
	g++ -c Main.cpp

Personas:	Personas.cpp Personas.h
	g++ -c Personas.cpp

Administrador.o:	Administrador.cpp Administrador.h Personas.h
	g++ -c Administrador.cpp

Baraja.o:	Baraja.cpp Baraja.h
	g++ -c Baraja.cpp

Cartas.o:	Cartas.cpp Cartas.h
	g++ -c Cartas.cpp

Jugador.o:	Jugador.cpp Jugador.h Personas.h
	g++ -c Jugador.cpp

Mesas.o:	Mesas.cpp Mesas.h
	g++ -c Mesas.cpp

Repartidor.o:	Repartidor.cpp Repartidor.h Personas.h
	g++ -c Repartidor.cpp


clean:
	rm -f *.o Main