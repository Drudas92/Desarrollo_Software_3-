#include <iostream>
#include <clocale>
using namespace std;


// Funcion para ingresar notas


void ingresarNotas(double notas[10][6]) {

    for (int i = 0; i < 10; i++) {

        cout<<"Estudiante " << i + 1<<endl;

        for (int j = 0; j < 6; j++) {

            cout<<"Nota " << j + 1 << ": ";
            cin>>notas[i][j];
        }
    }
}


// Funcion para mostrar matriz

void mostrarNotas(double notas[10][6]) {

    cout<<"MATRIZ DE NOTAS"<<endl;

    for (int i = 0; i < 10; i++) {

        cout<<"Estudiante " << i + 1 << ": ";

        for (int j = 0; j < 6; j++) {

            cout<<notas[i][j] << " ";
        }

        cout<<endl;
    }
}


// calcular el promedio de cada estudiante


void promedioEstudiantes(double notas[10][6]) {

    cout<<"PROMEDIO DE CADA ESTUDIANTE"<<endl;

    for (int i = 0; i < 10; i++) {

        double suma = 0;

        for (int j = 0; j < 6; j++) {

            suma = suma + notas[i][j];
        }

        double promedio = suma / 6;

        cout << "Estudiante " << i + 1 << ": " << promedio << endl;
    }
}


// calcular el promedio de cada evaluacion


void promedioEvaluaciones(double notas[10][6]) {

    cout<<"PROMEDIO DE CADA EVALUACION"<<endl;

    for (int j = 0; j < 6; j++) {

        double suma = 0;

        for (int i = 0; i < 10; i++) {

            suma = suma + notas[i][j];
        }

        double promedio = suma / 10;

        cout << "Evaluacion " << j + 1<< ": " << promedio << endl;
    }
}


// Funcion para encontrar la nota mas alta


void notaMasAlta(double notas[10][6]) {

    double mayor = notas[0][0];

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 6; j++) {

            if (notas[i][j] > mayor) {

                mayor = notas[i][j];
            }
        }
    }

    cout<<"Nota mas alta: " << mayor << endl;
}


// Funcion para encontrar la nota mas baja


void notaMasBaja(double notas[10][6]) {

    double menor = notas[0][0];

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 6; j++) {

            if (notas[i][j] < menor) {

                menor = notas[i][j];
            }
        }
    }

    cout<<"Nota mas baja: "<<menor<<endl;
}


// estudiante con mayor promedio


void mejorEstudiante(double notas[10][6]) {

    double mayorPromedio = 0;
    int estudiante = 0;

    for (int i = 0; i < 10; i++) {

        double suma = 0;

        for (int j = 0; j < 6; j++) {

            suma = suma + notas[i][j];
        }

        double promedio = suma / 6;

        if (promedio > mayorPromedio) {

            mayorPromedio = promedio;
            estudiante = i;
        }
    }

    cout<<"Estudiante con mayor promedio: "<< estudiante + 1 << endl;

    cout<<"Promedio: "<<mayorPromedio<<endl;
}


int main() {
    setlocale(LC_ALL, "");

    double notas[10][6];

    cout<<"SISTEMA DE CALIFICACIONES"<<endl;

    ingresarNotas(notas);

    mostrarNotas(notas);

    promedioEstudiantes(notas);

    promedioEvaluaciones(notas);

    notaMasAlta(notas);

    notaMasBaja(notas);

    mejorEstudiante(notas);





    return 0;
}