#include <iostream>


void imprimirPuntero(int* ptr){
	std::cout<<"Lo que almacena el puntero es:"<<std::endl;
	std::cout<<*ptr<<std::endl;
	std::cout<<"La dirección que almacena el puntero es:"<<std::endl;
	std::cout<<ptr<<std::endl;
	
}


int main(int argc, char** argv) {

	int numero = 7;
	int* prtInt = &numero;
	
	imprimirPuntero(prtInt);
	imprimirPuntero(&numero);
	
	
	//En el caso de usar un arreglo podemos acceder a este de dos maneras:
	
	int arrayInteger[4] = {0,1,2,3};
	
	for(int i = 0; i<4;i++){
		std::cout<<arrayInteger[i]<<std::endl;
	}
	
	//Es lo mismo que hacer
	
	for(int i = 0; i<4;i++){
		std::cout<<*(arrayInteger+i)<<std::endl;
	}

	std::cout<<"Ingrese los datos para un nuevo arreglo";
	int arrayByKeyboard[5];
	
	for(int i=0;i<5;i++){
		std::cout<<"Ingrese los números: ";
		std::cin>>arrayByKeyboard[i];
	}
	
	
	std::cout<<"Ingreso Random"<<std::endl;
	for(int i=0;i<5;i++){
		std::cout<<"Ingrese los números: ";
		std::cin>>*(arrayByKeyboard+i);
	}
	
	for(int i = 0; i<5;i++){
		std::cout<<arrayByKeyboard[i]<<std::endl;
	}

	return 0;
}