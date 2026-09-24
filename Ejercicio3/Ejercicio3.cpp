#include<iostream>

using namespace std;

int main() {

	float capInv, tasInt, gan;

	tasInt = 2;

	cout << "Ingresa su capital invertido :" << endl;
	cin >> capInv;

	gan = (capInv * tasInt) / 100;

	cout << "Los " << capInv << " pesos a una tasa de interes del: " << tasInt << " % tuvo un redimiento de $: " << gan << " pesos. " << endl;

	return 0; 
}