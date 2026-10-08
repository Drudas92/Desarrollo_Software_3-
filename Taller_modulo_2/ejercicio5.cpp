#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    double nota = 0, opcion = 0;
    while (opcion != 2)
    {
        cout << "Ingrese la opcion" << endl
             << "1. Ingresar nota" << endl
             << "2. Salir" << endl;
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Ingrese la nota" << endl;
            cin >> nota;

            while (nota < 0 || nota > 5)
            {
                cout << "Ingrese una nota valida" << endl;
                cin >> nota;
            }

            cout << "Su nota es: ";

            if (nota < 3)
            {
                cout << "Reprobado" << endl << endl << endl;
            }
            else if (nota >= 3 && nota < 4)
            {
                cout << "Aprobado" << endl << endl << endl;
            }
            else if (nota >= 4 && nota < 4.5)
            {
                cout << "Muy buena" << endl << endl << endl;
            }
            else
            {
                cout << "Excelente" << endl << endl << endl;
            }
        }
        else if (opcion == 2)
        {

            cout << "Saliendo del programa" << endl;
            
        }
    }

    return 0;
}
