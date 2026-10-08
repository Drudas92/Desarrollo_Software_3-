#include <iostream>
#include <limits>
using namespace std;

const int MAX_DATOS = 10;

int sumarDigitos(long long numero)
{
    if (numero < 0)
        numero = -numero;

    if (numero < 10)
        return static_cast<int>(numero);

    return static_cast<int>(numero % 10) + sumarDigitos(numero / 10);
}

int contarOcurrencias(int datos[], int n, int valor)
{
    if (n == 0)
        return 0;

    if (datos[n - 1] == valor)
        return 1 + contarOcurrencias(datos, n - 1, valor);

    return contarOcurrencias(datos, n - 1, valor);
}

void mostrarEnReverso(int datos[], int n)
{
    if (n == 0)
        return;

    cout << datos[n - 1] << " ";
    mostrarEnReverso(datos, n - 1);
}

bool leerEntero(int &numero)
{
    if (cin >> numero)
        return true;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return false;
}

int contarPares(int datos[], int cantidad)
{
    int contador = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (datos[i] % 2 == 0)
            contador++;
    }
    return contador;
}

int main()
{
    int datos[MAX_DATOS];
    int cantidad = 0;
    int opcion = 0;

    do
    {
        cout << "\n=== PROCESAMIENTO DE NUMEROS ===" << endl;
        cout << "1. Ingresar datos" << endl;
        cout << "2. Mostrar datos" << endl;
        cout << "3. Contar pares" << endl;
        cout << "4. Contar impares" << endl;
        cout << "5. Sumar digitos de un numero" << endl;
        cout << "6. Contar ocurrencias de un valor" << endl;
        cout << "7. Mostrar datos en reverso" << endl;
        cout << "8. Salir" << endl;
        cout << "Seleccione una opcion: " << endl;
        cin >> opcion;

        if (!leerEntero(opcion))
        {
            cout << "Entrada invalida. Ingrese una opcion del 1 al 8." << endl;
            continue;
        }

        switch (opcion)
        {
        case 1:
        {
            int nuevaCantidad;
            cout << "Cuantos numeros desea ingresar (1-" << MAX_DATOS << "): ";

            if (!leerEntero(nuevaCantidad) || nuevaCantidad < 1 || nuevaCantidad > MAX_DATOS)
            {
                cout << "Cantidad invalida. Debe estar entre 1 y " << MAX_DATOS << "." << endl;
                break;
            }

            cantidad = nuevaCantidad;
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                while (!leerEntero(datos[i]))
                    cout << "Entrada invalida. Ingrese un numero entero: ";
            }
            cout << "Datos guardados correctamente." << endl;
            break;
        }
        case 2:
            if (cantidad == 0)
            {
                cout << "Primero debe ingresar datos." << endl;
                break;
            }
            cout << "Datos: ";
            for (int i = 0; i < cantidad; i++)
                cout << datos[i] << " ";
            cout << endl;
            break;
        case 3:
        {
            if (cantidad == 0)
            {
                cout << "Primero debe ingresar datos." << endl;
                break;
            }

            cout << "Cantidad de pares: " << contarPares(datos, cantidad) << endl;
            break;
        }
        case 4:
        {
            if (cantidad == 0)
            {
                cout << "Primero debe ingresar datos." << endl;
                break;
            }

            int contador = 0;
            for (int i = 0; i < cantidad; i++)
            {
                if (datos[i] % 2 != 0)
                    contador++;
            }

            cout << "Cantidad de impares: " << contador << endl;
            break;
        }
        case 5:
        {
            int numero;
            cout << "Ingrese un numero: ";
            if (!leerEntero(numero))
            {
                cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                break;
            }
            cout << "La suma de sus digitos es: " << sumarDigitos(numero) << endl;
            break;
        }
        case 6:
        {
            if (cantidad == 0)
            {
                cout << "Primero debe ingresar datos." << endl;
                break;
            }

            int valor;
            cout << "Ingrese el valor que desea contar: ";
            if (!leerEntero(valor))
            {
                cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                break;
            }
            cout << "El valor aparece " << contarOcurrencias(datos, cantidad, valor) << " veces." << endl;
            break;
        }
        case 7:
            if (cantidad == 0)
            {
                cout << "Primero debe ingresar datos." << endl;
                break;
            }
            cout << "Datos en reverso: ";
            mostrarEnReverso(datos, cantidad);
            cout << endl;
            break;
        case 8:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opcion invalida. Seleccione una opcion del 1 al 8." << endl;
        }
    } while (opcion != 8);

    return 0;
}
