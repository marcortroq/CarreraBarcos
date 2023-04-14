#include <iostream>
#include "Barcos.h"
#include <time.h>
#include <Windows.h>
#include <stdlib.h>

//VARIABLES
int dado;
int dadoNitro;
int elec;

int tirarDado() {
	//DADO PARA LA VELOCIDAD
	return dado = rand() % (7 - 1) + 1;
}

int tirarDadoNitro() {
	//DADO PAR EL NITRO
	return dadoNitro = rand() % 2;
}

void main() {
	srand(time(NULL));

	//CONSTRUCTOR

	Barcos barco1(0, 0, 1, "Corredor 1");
	Barcos barco2(0, 0, 1, "Corredor 2");

	//CODIGO
	for (size_t i = 1; i <= 5; i++){

		//REPRESENTACION GRAFICA DE LA DISTANCIA
		
		barco1.lineaDist();
		barco2.lineaDist();
		
		cout << "\n";
	

		cout << "TURNO " << (i) << "\n" << endl;

		//VELOCIDAD Y DISTANCIA DE LA LANCHA 1

		cout << "La lancha " << barco1.getName() << " aumenta su velocidad por " <<  tirarDado() << " puntos" << endl;
		Sleep(1000);
		cout << "La velocidad del " << barco1.getName() << " es " << barco1.velActual(barco2.getVel(), dado);
		cout << " La distancia total recorrida es " << barco1.distRecorrida() << " m" << endl;

		//USAR EL NITRO
		barco1.usoNitro(elec, tirarDadoNitro());
		
		//VELOCIDAD Y DISTANCIA DE LA LANCHA 2
		
		cout << "La lancha " << barco2.getName() << " aumenta su velocidad por " << tirarDado() << " puntos" << endl;
		Sleep(1000);
		cout << "La velocidad del " << barco2.getName() << " es " << barco2.velActual(barco2.getVel(), dado);
		cout << " La distancia total recorrida es " << barco2.distRecorrida() << " m" << endl;
		cout << "\n";

		//USAR EL NITRO
		barco2.usoNitro(elec, tirarDadoNitro());
		system("cls");
	}

	//REPRESENTACION GRAFICA DE LA DISTANCIA
	
	barco1.lineaDist();
	barco2.lineaDist();
	cout << "\n";

	if (barco1.getDist() > barco2.getDist()){
		cout << "EL BARCO 1 GANA LA CARRERA";
	} else if (barco1.getDist() < barco2.getDist()) {
		cout << "EL BARCO 2 GANA LA CARRERA";
	} else if (barco1.getDist() == barco2.getDist()) {
		cout << "EMPATE";
	}

}