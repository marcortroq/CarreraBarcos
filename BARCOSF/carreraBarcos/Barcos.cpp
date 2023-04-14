#include "Barcos.h"
#include <iostream>

	
	//CONSTRUCTOR
		Barcos::Barcos(int pVel, int pDist, int pNitro, string pName) {
			vel = pVel;
			dist = pDist;
			nitro = pNitro;
			name = pName;
		}

	//GETTER
		int Barcos::getVel() {
			return vel;
		}

		int Barcos::getDist() {
			return dist;
		}

		int Barcos::getNitro() {
			return nitro;
		}

		string Barcos::getName() {
			return name;
		}
	///SETTERS

		int Barcos::setVel(int pVel) {
			return vel = pVel;
		}

		int Barcos::setNitro(int pNitro) {
			return nitro = pNitro;
		}

		int Barcos::setDist(int pDist) {
			return dist = pDist;
		}


	//METODO PROPIOS

		int Barcos::velActual(int pVel, int dado) {
			pVel = pVel + dado;
			Barcos::setVel(pVel);
			return pVel;
		}

		void Barcos::usoNitro(int elec, int dadoNitro) {
			if (getNitro() == 1) {
				cout << "QUIERES USAR EL NITRO [PULSA 1 PARA USAR] [USOS RESTANTES: " << getNitro() << "]" << endl;
				cin >> elec;
				if (elec == 1)
				{
					int pNitro = 0;
					Barcos::setNitro(pNitro);
					if (dadoNitro == 1) {
						setVel(getVel() * 2);
						cout << "EL NITRO A FUNCIONADO " << getName() << " DUPLICA SU VELOCIDAD LA NUEVA VELOCIDAD ES DE " << getVel() << endl;
					}
					else {
						setVel(getVel() / 2);
						cout << "EL NITRO A FALLADO, " << getName() << "SU VELOCIDAD BAJA A LA MITAD " << getVel() << endl;
					}
				}
			}
			
		}

		int Barcos::distRecorrida() {
			return setDist(getDist() + getVel() * 100);
		}

		void Barcos::lineaDist() {
			cout << "Distancia recorrida " << getName() << ": [";

			for (size_t i = 0; i < getDist() / 100; i++)
			{
				cout << "*";
			}

			cout << "] " << getDist() << "m " << endl;
		}