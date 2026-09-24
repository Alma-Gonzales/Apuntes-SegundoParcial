#include<iostream>

using namespace std;

int main() {
	float porDes, valDes, valCom, valPag;

	porDes = 15;

	cout << "Valor de la compra: " << endl;
	cin >> valCom;

	valDes = (valCom * porDes) / 100;
	valPag = valCom - valDes;

	cout << "Porcentaje descuento: "<< porDes << "%" << endl;
	cout << "Valor descontado: " << valDes << endl;
	cout << "Valor a pagar: "<< valPag << endl;

	return 0; 
}