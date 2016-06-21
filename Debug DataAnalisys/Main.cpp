#include <stdio.h>
#include <iostream>
#include "DataAnalisys.h"
#include "Reader\reader.h"
#include "OpenGl.h"
#include <locale.h>
using namespace std;
using namespace System;
void Mairtsdhgn() {
#pragma region Parametros
	setlocale(LC_NUMERIC, "es_ES");
	/*-------------------------------------------------------------------------------------------*/
	/*---------------------------Parametros necesarios-------------------------------------------*/
	/*-------------------------------------------------------------------------------------------*/
	cli::array<Thread^>^ Threads= gcnew cli::array<Thread^>(NUMERO_THREADS);
	//Lista de puntos
	List<Punto3D^>^ Puntos;
	Puntos = gcnew List<Punto3D^>();
	//Lista de obstaculos
	List<Obstaculo^>^ Obstaculos;
	Obstaculos = gcnew List<Obstaculo^>();
	//Parametros de Analisys
	cli::array<Object^>^ ArrayDataAnalisys;
	ArrayDataAnalisys = gcnew cli::array<Object^>(SIZE_ARRAY_ANALISYS);
	//Flags
	cli::array<bool>^ Flags;
	Flags = gcnew cli::array<bool>(SIZE_ARRAY_FLAGS);
	//Conclusiones
	List<int>^ Conclusiones;
	Conclusiones = gcnew List<int>();
	String^ informe;
	String ^ entrada;
	String^ path;
	StreamReader^ sr;
	/*-------------------------------------------------------------------------------------------*/
	/*-----------------------------------Fin parametros------------------------------------------*/
	/*-------------------------------------------------------------------------------------------*/
#pragma endregion
#pragma region Ajuste
	/*-------------------------------------------------------------------------------------------*/
	/*----------------------------------Ajuste de parametros-------------------------------------*/
	/*-------------------------------------------------------------------------------------------*/
#pragma region Flags
	Flags[FLAG_TRATAMIENTO] = false;
	Flags[FLAG_LOG] = false;
	Flags[FLAG_WARNING] = false;
	Flags[FLAG_PAUSA] = true;
	Flags[FLAG_ANALISYS] = true;
	Flags[FLAG_OPENGL] = true;
#pragma endregion
#pragma region ArrayDataAnalisys
	ArrayDataAnalisys[HORIZONTAL_RESOLUTION] = 180;
	ArrayDataAnalisys[VERTICAL_RESOLUTION] = 30;
	ArrayDataAnalisys[OPENING] = 10;
	ArrayDataAnalisys[CAR_VELOCITY] = 10;
	ArrayDataAnalisys[INFORME_ANALISYS] = informe;
	ArrayDataAnalisys[INFORMEA] = informe;
#pragma endregion
	/*-------------------------------------------------------------------------------------------*/
	/*---------------------------------------Fin de ajuste---------------------------------------*/
	/*-------------------------------------------------------------------------------------------*/
#pragma endregion
	
#pragma region Lectura
	/*-------------------------------------------------------------------------------------------*/
	/*----------------------------------Lectura de fichero-------------------------------------*/
	/*-------------------------------------------------------------------------------------------*/



	/*-------------------------------------------------------------------------------------------*/
	/*--------------------------------------Fin de lectura---------------------------------------*/
	/*-------------------------------------------------------------------------------------------*/
#pragma endregion
	OpenGl^ Dibujador = gcnew OpenGl(Threads);
	DataAnalisys^ Analisys = gcnew DataAnalisys(Puntos, Obstaculos, ArrayDataAnalisys, Conclusiones, Flags, Threads, Dibujador);
	DataReader^ f;
	//path = Console::ReadLine();
	int frame = 0;
	String^ interno = "E:\\plot matlab\\log.log";
	Console::WriteLine(interno);
	

#pragma region Tratamiento
#pragma endregion
}
void Esperar() {

}