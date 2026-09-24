#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	float  sueBas, porCom, valCom,  valVen1, valVen2, valVen3, sueNet;

	porCom = 10 ;

	cout << "Sueldo Basico: " << endl;
	cin >> sueBas;

	cout << "Valor venta 1: " << endl;
	cin >> valVen1;

	cout << "Valor venta 2: " << endl;
	cin >> valVen2;

	cout << "Valor venta 3: " << endl;
	cin >> valVen3;

	valCom = ((valVen1 + valVen2 + valVen3) * porCom) / 100;
	sueNet = sueBas + valCom;

	cout << "Valor de la comision: " << valCom << endl;
	cout << "Sueldo Neto: "<< setprecision(0)<< fixed <<sueNet << endl;

	return 0;
}
