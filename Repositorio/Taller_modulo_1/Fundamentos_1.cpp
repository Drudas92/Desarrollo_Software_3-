#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    int numero [10];
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;
    int suma = 0;
    int mayor = 0;
    int menor = 0;
    int buscar = 0;
    int contador = 0;
    bool encontrado = false;
    double promedio = 0;

    for (int i = 0; i<10; i++){
        cout<< "Ingrese el número " << i + 1 << ": ";
        cin >> numero[i];
    }

    cout<< "Los números en orden inverso son: "<<endl;


    for (int i=9; i>=0; i--){
        cout<< numero[i] << endl;
    }

    cout<<endl;

    //positivos, negativos y ceros

    for (int i=0; i<10; i++){
        if (numero[i] > 10){
            positivos++;
        }
        else if (numero[i] < 10){
            negativos++;
        }
        else{
            ceros++;
        }
        suma += numero[i];
    }


    cout<<"Los números positivos son: " << positivos << endl;
    cout<<"Los números negativos son: " << negativos << endl;
    cout<<"Los ceros: " << ceros << endl;


    // numero mayor y numero menor

    mayor = numero[0];
    menor = numero[0];

    for (int i=0; i<10; i++){
        if (numero[i] > mayor){
            mayor = numero[i];
        }
        if (numero[i] < menor){
            menor = numero[i];
        }
    }

    cout<<"El número mayor es: " << mayor << endl;
    cout<<"El número menor es: " << menor << endl;


    //suma y promedio

    for (int i=0; i<10; i++){
        suma = suma + numero[i];
    }

    promedio = (double)suma / 10;

    cout<<"La suma de los números es: " << suma << endl;
    cout<<"El promedio de los números es: " << promedio << endl;


    //buscar el numero 

    cout<<"Ingrese el número que desea buscar: ";
    cin>> buscar;

    for (int i=0; i<10; i++){
        if (numero[i] == buscar){
            encontrado = true;
        }
    }

    if (encontrado){
        cout<<"el número " << buscar << " se encuentra en el arreglo." << endl;
    }
    else{
        cout<<"el número " << buscar << " no se encuentra en el arreglo." << endl;
    }


    //contador

    contador = 0;

    cout<<"Ingrese el numero que desea contar: ";
    cin>> buscar;

    for (int i=0; i<10; i++){
        if (numero[i] == buscar){
            contador++;
        }
    }

    cout<<"El número " << buscar << " se encuentra " << contador << " veces en el arreglo." << endl;

    return 0;
}