#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cantidad = 0;            // posiciones
    int asj = 1000;              // tamaño del arreglo
    int codigos[asj];            // arreglo de codigos
    vector<string> nombres(asj); // arreglo de nombres
    double notas[asj][4];        // arreglo de notas
    int i = 0, x = 0, promedioM = 0, index = 0, estudiantesReprobados = 0, opcion = 0; //

    while (opcion != 7) // ciclo para el menu
    {
        cout << "\n--- Gestion de estudiantes ---\n"
             << "1. Registrar estudiante\n"
             << "2. Mostrar estudiantes\n"
             << "3. Buscar estudiante\n"
             << "4. Mostrar promedio de un estudiante\n"
             << "5. Mostrar estudiante con mayor promedio\n"
             << "6. Mostrar estadisticas del grupo\n"
             << "7. Salir\n"
             << "Opcion: ";
        cin >> opcion;

        switch (opcion) // switch para las opciones del menu
        {
        case 1:
        {

            cout << "Cantidad de estudiantes a registrar: " << endl;
            cin >> x;
            cantidad += x;
            
            // ciclo para registrar estudiantes
            while (i < cantidad)
            {
                cout << "Codigo del estudiante " << (i + 1) << ": " << endl;
                cin >> codigos[i];
                cout << "Nombre del estudiante " << (i + 1) << ": " << endl;
                cin >> nombres[i];
                for (int j = 0; j < 4; j++)
                {
                    cout << "Nota " << (j + 1) << " del estudiante " << (i + 1) << ": " << endl;
                    cin >> notas[i][j];
                }
                
                cout << "Estudiante registrado correctamente." << endl;
                
                i++;
            }
            break;
        }

        case 2:
        {

            if (cantidad == 0)
            {
                cout << "No hay estudiantes registrados." << " Regsitrar primero." << endl;
                break;
            }
            else
            {
                // ciclo para mostrar estudiantes
                cout << "Estudiantes registrados:\n";
                for (int o = 0; o < cantidad; o++)
                {
                    cout << "Codigo: " << codigos[o] << ", Nombre: " << nombres[o] << ", Notas: ";
                    for (int j = 0; j < 4; j++)
                    {
                        cout << notas[o][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }
        }

        case 3:
        {
            cout << "Ingrese el codigo del estudiante a buscar: ";
            int codigoBuscado;
            cin >> codigoBuscado;
            bool encontrado = false;

            // ciclo para buscar estudiante
            for (int o = 0; o < cantidad; o++)
            {
                if (codigos[o] == codigoBuscado)
                {
                    cout << "Estudiante encontrado:\n";
                    cout << "Codigo: " << codigos[o] << ", Nombre: " << nombres[o] << ", Notas: ";
                    for (int j = 0; j < 4; j++)
                    {
                        cout << notas[o][j] << " ";
                    }
                    cout << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado)
            {
                cout << "Estudiante no encontrado." << endl;
            }
            break;
        }

        case 4:
        {
            
            cout << "Ingrese el codigo del estudiante para calcular su promedio: ";
            int codigoPromedio;
            cin >> codigoPromedio;
            bool encontradoPromedio = false;
            
            // ciclo para calcular promedio de estudiante
            for (int o = 0; o < cantidad; o++)
            {
                if (codigos[o] == codigoPromedio)
                {
                    double promedio = 0;
                    for (int j = 0; j < 4; j++)
                    {
                        promedio += notas[o][j];
                    }
                    promedio /= 4;
                    cout << "El promedio del estudiante " << nombres[o] << " es: " << promedio << endl;
                    encontradoPromedio = true;
                    break;
                }
            }
            if (!encontradoPromedio)
            {
                cout << "Estudiante no encontrado." << endl;
            }
            
            break;
            
        }
        case 5:
        {

            // estudiante con mayor promedio
            for (int o = 0; o < cantidad; o++)
            {
                double promedio = 0;
                for (int j = 0; j < 4; j++)
                {
                    promedio += notas[o][j];
                }
                promedio /= 4;
                
                if (promedio > promedioM)
                {
                    promedioM = promedio;
                    index = o;
                }
            }
            cout << "El estudiante con mayor promedio es: " << nombres[index] << " con un promedio de: " << promedioM << endl;
            break;
            
        }
        case 6:
        {

            // promedio general del grupo
            double promedioGeneral = 0;
            for (int o = 0; o < cantidad; o++)
            {
                double promedio = 0;
                for (int j = 0; j < 4; j++)
                {
                    promedio += notas[o][j];
                }
                promedio /= 4;
                if (promedio < 3)
                {
                    estudiantesReprobados++;
                }
                promedioGeneral += promedio;
            }
            promedioGeneral /= cantidad;
            cout << "El promedio general del grupo es: " << promedioGeneral << endl;
            cout << "El número de estudiantes reprobados es: " << estudiantesReprobados << endl;
            cout << "El número de estudiantes aprobados es: " << (cantidad - estudiantesReprobados) << endl;
            
            break;
            
        }
        case 7:
        {

            cout << "Programa terminado.\n";
            break;
            
            default:
            cout << "Opcion no valida.\n";
        }
    }
    }
    return 0;
}