/*
AED-TP5-Positivo Gustavo Gaston Idoyaga
K1051 / Legajo:153969-5
20150515
*/

#include <iostream>

using namespace std;

int main (){
	int num, max;
	cout << "Ingrese tantos numeros positivos que desee, separelos precionando el boton 'Enter'. Ponga 0 para finalizar." << endl;
	cin >> num;
	max=num;
  	while (num!=0){
  		cin >> num;
  		if (max<num){
			max=num;
	  	}
  	}
  	cout << "El numero mayor fue: " << max << endl;
}
