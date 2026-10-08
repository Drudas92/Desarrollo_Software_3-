#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");


    int arreglo [10];
    int arreglo2 [10];

    cout<<"Ingrese los 10 números del primer arreglo: "<<endl;

    for (int i=0; i<10; i++){
        cout<<"Ingrese el número " << i + 1 << ": ";
        cin>> arreglo[i];
    }
    

    cout<<"Arreglo invertido: "<<endl;

    for (int i=0; i<5 ; i++){
        
        int temp = arreglo[i];
        arreglo[i] = arreglo[9-i];
        arreglo[9-i] = temp;
    }

    for (int i=0; i<10; i++){
        cout<< arreglo[i] << " ";
    }
    cout<<endl;



    cout<<"Arreglo sin repetidos: "<<endl;

    for (int i=0; i<10; i++){
        bool repetido = false;
        
        for (int j=0; j<i; j++){
            if (arreglo[i] == arreglo[j]){
                repetido = true;
            }
        }

        if (repetido == false){
            cout<< arreglo[i] << " ";
        }
    }

    cout<<endl;


    int mayor = arreglo[0];
    int segundoMayor = arreglo[0];

    for (int i=0; i<10; i++){
        if (arreglo[i] > mayor){
            segundoMayor = mayor;
            mayor = arreglo[i];
        }
        else if (arreglo[i] > segundoMayor && arreglo[i] != mayor){
            segundoMayor = arreglo[i];
        }
    }
    

    cout<<"El segundo número mayor es: " << segundoMayor << endl;


    int ultimo = arreglo[9];

    for (int i=9; i>0; i--){
        arreglo[i] = arreglo[i-1];
    }

    arreglo[0] = ultimo;

    cout<<"Arreglo rotado a la derecha: "<<endl;

    for (int i=0; i<10; i++){
        cout<< arreglo[i] << " ";
    }

    cout<<endl;

    //segundo arreglo

    cout<<"Ingrese los 10 números del segundo arreglo: "<<endl;

    for (int i=0; i<10; i++){
        cout<<"Ingrese el número " << i + 1 << ": ";
        cin>> arreglo2[i];
    }


    //combinación de arreglos

    cout<<"Arreglos combinados: "<<endl;
    for (int i=0; i<10; i++){
        cout<< arreglo[i] << " ";
    }

    for (int i=0; i<10; i++){
        cout<< arreglo2[i] << " ";
    }

    cout<<endl;


    //de menor a mayor

    for (int i=0; i<9; i++){
        for (int j=i+1; j<10; j++){
            if (arreglo [i] > arreglo[j]){
                int temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }

    cout<<"Arreglo ordenado de menor a mayor: "<<endl;

    for (int i=0; i<10; i++){
        cout<< arreglo[i] << " ";
    }

    cout<<endl;

    //comparar arreglos

    bool iguales = true;

    for (int i=0; i<10; i++){
        if (arreglo[i] != arreglo2[i]){
            iguales = false;
        }
    }

    cout<<"Comparación de arreglos: "<<endl;

    if (iguales == true){
        cout<<"Los arreglos son iguales." << endl;
    }
    else{
        cout<<"Los arreglos son diferentes." << endl;
    }

    return 0;
}
