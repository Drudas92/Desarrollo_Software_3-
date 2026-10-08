#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void CelsiusaFahrenheit()
{
    double celsius;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl << endl;
}

void FahrenheitaCelsius()
{
    double fahrenheit;
    cout << "Ingrese la temperatura en Fahrenheit: ";
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " grados Fahrenheit son " << celsius << " grados Celsius." << endl << endl;
}

void Kilometrosamillas()
{
    double kilometros;
    cout << "Ingrese la distancia en kilómetros: ";
    cin >> kilometros;
    double millas = kilometros * 0.621371;
    cout << kilometros << " kilómetros son " << millas << " millas." << endl << endl;
}

void MillasaKilometros()
{
    double millas;
    cout << "Ingrese la distancia en millas: ";
    cin >> millas;
    double kilometros = millas / 0.621371;
    cout << millas << " millas son " << kilometros << " kilómetros." << endl << endl;
}

int main()
{

    ll opcion = 1;
    bool flag = true;

    
    while (opcion != 0)
    {
        cout << "=== CONVERSOR ===" << endl;
        cout << "1. Celsius a Fahrenheit" << endl;
        cout << "2. Fahrenheit a Celsius" << endl;
        cout << "3. Kilómetros a millas" << endl;
        cout << "4. Millas a kilómetros" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            CelsiusaFahrenheit();
            break;
        case 2:
            FahrenheitaCelsius();
            break;
        case 3:
            Kilometrosamillas();
            break;
        case 4:
            MillasaKilometros();
            break;
        case 0:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
            break;
        }
    }

    return 0;
}