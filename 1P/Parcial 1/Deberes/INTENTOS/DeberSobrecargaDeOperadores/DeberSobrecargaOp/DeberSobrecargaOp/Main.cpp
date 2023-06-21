#include <iostream>
#include "Persona.h"

int main() {
	Persona usuario1(19,2004,333.33),usuario2(20,2003,666.66),admin;
	admin = usuario1 + usuario2;



	return 0;
}