//Alma Leticia Douglas Gonzales Guilbert

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int salarioBasico, bono, porcentaje, antiguedad;
    cout << "Ingrese el salario basico:" << endl;
    cin >> salarioBasico;
    cout << "Ingrese los anios de antiguedad:" << endl;
    cin >> antiguedad;
    if (antiguedad < 5)
    {
        porcentaje = 5;
    }
    else
    {
        if (antiguedad < 10)
        {
            porcentaje = 10;
        }
        else
        {
            if (antiguedad < 15)
            {
                porcentaje = 15;
            }
            else
            {
                if (antiguedad < 20)
                {
                    porcentaje = 20;
                }
                else
                {
                    if (antiguedad < 25)
                    {
                        porcentaje = 25;
                    }
                    else
                    {
                        if (antiguedad < 30)
                        {
                            porcentaje = 35;
                        }
                        else
                        {
                            porcentaje = 50;
                        }
                    }
                }
            }
        }
    }
    bono = salarioBasico * porcentaje / 100;
    cout << "Porcentaje de bonificacion: " << porcentaje << "%" << endl;
    cout << "Bonificacion anual: " << bono << endl;

    return 0;
}