/*
 * main.cpp
 *
 *  Created on: 07/10/2020
 *      Author: bvaldesa
 */

#include <iostream>
#include "funciones.h"

using namespace std;

int main(int argc, char* argv[]) {
	funciones fun;
	int i = 1;

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 28 << " Respuesta del Programa:  " << fun.sumaIterativa(7) << "\n";
	cout << " " << ((28 == fun.sumaIterativa(7)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 28 << " Respuesta del Programa:  " << fun.sumaRecursiva(7) << "\n";
	cout << " " << ((28 == fun.sumaRecursiva(7)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 28 << " Respuesta del Programa:  " << fun.sumaDirecta(7) << "\n";
	cout << " " << ((28 == fun.sumaDirecta(7)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 3 << " Respuesta del Programa:  " << fun.sumaIterativa(2) << "\n";
	cout << " " << ((3 == fun.sumaIterativa(2)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 3 << " Respuesta del Programa:  " << fun.sumaRecursiva(2) << "\n";
	cout << " " << ((3 == fun.sumaRecursiva(2)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 3 << " Respuesta del Programa:  " << fun.sumaDirecta(2) << "\n";
	cout << " " << ((3 == fun.sumaDirecta(2)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 55 << " Respuesta del Programa:  " << fun.sumaIterativa(10) << "\n";
	cout << " " << ((55 == fun.sumaIterativa(10)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 55 << " Respuesta del Programa:  " << fun.sumaRecursiva(10) << "\n";
	cout << " " << ((55 == fun.sumaRecursiva(10)) ? "Success\n" : "Fail\n");

	cout << "\n" << i++ <<".- Respuesta Esperada: " << 55 << " Respuesta del Programa:  " << fun.sumaDirecta(10) << "\n";
	cout << " " << ((55 == fun.sumaDirecta(10)) ? "Success\n" : "Fail\n");

	cout<<"\n------------------------------------------------------------------------";
	cout<<"\n"<<"Marco Antonio Camalich Perez"<<"\nA01351725"<<"\n25 de Agosto de 2021"<<"\nProgramacion de estructuras de datos y algoritmos fundamentales"<<"\nFunciones Iterativas, Recursivas y su analisis de Complejidad";
	cout<<"\nBenjamin Valdes Aguirre";
	cout<<"\n------------------------------------------------------------------------";
	}


