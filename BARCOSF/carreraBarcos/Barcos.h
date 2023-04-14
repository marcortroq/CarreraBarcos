#pragma once
#include <iostream>


using namespace std;

class Barcos
{
private:
	int vel;
	int dist;
	int nitro;
	string name;
public:
	
	//CONSTRUCTOR

		Barcos(int pVel, int pDist, int pNitro, string pName);

	//GETTERS

		int getVel();

		int getDist();

		int getNitro();

		string getName();

	//SETTERS

		int setVel(int pVel);

		int setDist(int pDist);

		int setNitro(int pNitro);

		string setName(string  pName);
	
	//METODOS PROPIOS

		int velActual(int pVel, int pDado);

		void usoNitro(int pelec, int pdadoNitro);

		int distRecorrida();

		void lineaDist();
};

