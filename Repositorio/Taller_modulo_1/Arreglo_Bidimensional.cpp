#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int matriz[3][3];
    int suma = 0;
    int buscar;
    bool encontrado = false;

    //ingresan la matriz

    cout<<"Ingrese los valores de la matriz 3x3: "<<endl;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<"Ingrese el valor de la posición [" << i << "][" << j << "]: ";
            cin>> matriz[i][j];
        }
    }

    //mostrar la matriz

    cout<<"La matriz ingresada es: "<<endl;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<< matriz[i][j] << " ";
        }

        cout<<endl;
    }


    //suma de la matriz

    suma = 0;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            suma = suma + matriz[i][j];
        }
    }

    cout<<"La suma de los valores de la matriz es: " << suma << endl;

    //suma de las filas

    cout<<"La suma de las filas es: "<<endl;

    for (int i=0; i<3; i++){

        suma = 0;

        for (int j=0; j<3; j++){
            suma = suma + matriz[i][j];
        }

        cout<<"Fila " << i + 1 << ": " << suma << endl;
    }

    //suma de las columnas

    cout<<"La suma de las columnas es: "<<endl;

    for (int j=0; j<3; j++){

        suma = 0;

        for (int i=0; i<3; i++){
            suma = suma + matriz[i][j];
        }

        cout<<"Columna " << j + 1 << ": " << suma << endl;
    }

    //diagonal principal

    cout<<"La diagonal principal es: "<<endl;


    for (int i=0; i<3; i++){
        cout<< matriz[i][i] << " ";
    }

    cout<<endl;

    //segunda diagonal

    cout<<"La segunda diagonal es: "<<endl;

    for (int i=0; i<3; i++){
        cout<< matriz[i][2-i] << " ";
    }
    
    cout<<endl;



    //determinar simetr�a


    bool simetrica = true;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (matriz[i][j] != matriz[j][i]){
                simetrica = false;
            }
        }
    }

    cout<<"La matriz es sim�trica? "<<endl;

    if (simetrica == true){
        cout<<"S� es sim�trica." << endl;
    }
    else{
        cout<<"No es sim�trica." << endl;
    }

    //transpuesta de la matriz

    cout<<"La matriz transpuesta es: "<<endl;


    for (int j=0; j<3; j++){
        for (int i=0; i<3; i++){
            cout<< matriz[i][j] << " ";
        }

        cout<<endl;
    }


    //buscar un n�mero en la matriz

    cout<<"Ingrese el n�mero que desea buscar: ";
    cin>> buscar;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (matriz[i][j] == buscar){
                cout<<"El n�mero " << buscar << " se encuentra en la fila " << i + 1 << " y columna " << j + 1 << endl;
                encontrado = true;
            }
        }
    }

    if (encontrado == false){
        cout<<"El n�mero " << buscar << " no se encuentra en la matriz." << endl;
    }



    return 0;
}