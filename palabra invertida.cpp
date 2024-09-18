#include <iostream>
#include <string>
using namespace std;



void invertir(){
	string palabra,palabraInvertida;
	
	cout<<"** Palabra invertida **"<<endl;	
	cout<<"Ingrese una palabra sin espacios en blanco: ";
	cin>>palabra;
	palabraInvertida = palabra;
	
	for(int inicia=0; inicia<palabra.length();inicia++){       //inicia en cero
		palabraInvertida[inicia]=palabra[palabra.length()-1-inicia];
	}


	cout<<"palabra invertida: "<<palabraInvertida<<endl;
}

int main(){
	invertir();
	
	
	return 0;
}


























































