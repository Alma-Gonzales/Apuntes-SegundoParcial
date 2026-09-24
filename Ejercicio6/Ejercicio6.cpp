//Alma Leticia Douglas Gonzales Guilbert

#include <iostream>

using namespace std;

int main() {

	//Definicion o declaracion de variables
	double val1, val2, res;

	//Datos de entrada
	cout << "Valor No.1: " << endl;
	cin >> val1;
	cout << "Valor No. 2: " << endl;
	cin >> val2;

	//Procesos Parciales
	if (val1 < val2) {
		res = val1 + val2;
	}
	else {
		if (val1 > val2) {
			res = val1 - val2;
		}
		else {
			res = val1 + val2;
		}
	}
// Datos de salida parciales
	cout << "Resultados = " << res;
	return 0;
}