/***************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 16/05/23 21:39
 Fecha de modificacion: 19/05/23 10:30
 Enunciado General:Deber3 Operadores Sobrecargados
 ****************************/
 //REFERENCIAS DE LA VALIDACIÓN: Stephen Drouet (Grupo 2)
 
 
 #include "Dato.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int Dato::ingresarMenuOpcion(char cnum1, char cnum2) {		
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	
	while (true) {
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  cout << endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			cout << "\b \b"; // borra el último caracter de la consola
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (tecla >= cnum1 && tecla <= cnum2 && i<1) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  cout << tecla; // muestra el caracter ingresado en la consola
		}
	}

	return atof(entrada); // convierte la entrada a un número float y lo retorna
}

//Ingresar numeros enteros
int Dato::ingresarEntero() {		
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	
	while (true) {
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  cout << endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			cout << "\b \b"; // borra el último caracter de la consola
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (isdigit(tecla) && i<12) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  cout << tecla; // muestra el caracter ingresado en la consola
		}
	}

	return atof(entrada); // convierte la entrada a un número float y lo retorna
}


float Dato::ingresarFloat() {
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	bool punto = false;
	int signoMenosPos = -1;
	while(true){
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  cout << endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			cout << "\b \b"; // borra el último caracter de la consola
			if (entrada[i] == '.') { // si se eliminó un punto, reinicia el flag de punto
				punto = false;
			}
			if (i == signoMenosPos) { // si se eliminó el signo menos, reinicia la posición del signo menos
				signoMenosPos = -1;
			}
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (isdigit(tecla) && i < 15) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  cout << tecla; // muestra el caracter ingresado en la consola
		} else if (tecla == '.' && !punto) { // si el usuario ingresa un punto y no se ha ingresado ya uno, o si ya se ingresó uno pero se eliminó
			  entrada[i++] = tecla;
			  punto = true; // marca que se ha ingresado un punto
			  cout << tecla;
		} else if (tecla == '-' && i == 0) { // si el usuario ingresa un signo menos al principio
			  entrada[i++] = tecla;
			  signoMenosPos = i - 1; // marca la posición del signo menos
			  cout << tecla;
		}
	}

	return atof(entrada); // convierte la entrada a un número float y lo retorna
  
}