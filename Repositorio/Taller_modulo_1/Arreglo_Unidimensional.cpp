#include <iostream>
#include <clocale>

using namespace std;

    //funcion para mostrar arreglo

    void mostrarArreglo(int arreglo[], int n){
        for (int i=0; i<n; i++){
            cout<< arreglo[i] << " ";
        }
        cout<<endl;
    } 


    //funcion para los datos del arreglo

    void IngresarArreglo(int arreglo[], int n){
        for (int i=0; i<n; i++){
            cout<<"Ingrese el n�mero " << i + 1 << ": ";
            cin>> arreglo[i];
        }
    }

     //funcion para estadisticas del arreglo


    void estadisticasArreglo(int arreglo[], int n){

        int mayor = arreglo[0];
        int menor = arreglo[0];
        int suma = 0;
        int pares = 0;
        int impares = 0;
        int posicionMayor = 0;

        for (int i=0; i<n; i++){
            
            suma = suma + arreglo[i];
            if (arreglo[i] > mayor){
                mayor = arreglo[i];
                posicionMayor = i;
            }

            if (arreglo[i] < menor){
                menor = arreglo[i];
            }
            
            if (arreglo[i] % 2 == 0){
                pares++;
            }
            else{
                impares++;
            }
        }


        double promedio = (double)suma / n;


        cout<<"Estadisticas del arreglo: "<<endl;
        cout<<"Elementos ingresados: "<<n<<endl;
        mostrarArreglo(arreglo, n);

        cout<<"suma: " << suma << endl;
        cout<<"promedio: " << promedio << endl;
        cout<<"mayor: " << mayor << endl;
        cout<<"menor: " << menor << endl;
        cout<<"Cantidad de n�meros pares: " << pares << endl;
        cout<<"Cantidad de n�meros impares: " << impares << endl;
        cout<<"Posici�n del n�mero mayor: " << posicionMayor + 1 << endl;
    }


        //funcion para buscar un n�mero en el arreglo

    void buscarNumero(int arreglo[], int n){
            
        int buscar;
        int comparaciones = 0;
        bool encontrado = false;

        cout<<"Ingrese el n�mero que desea buscar: ";
        cin>> buscar;


        for (int i=0; i<n; i++){
        comparaciones++;

            if (arreglo[i] == buscar){
            encontrado = true;
            cout<<"El n�mero " << buscar << " se encuentra en la posici�n " << i + 1 << endl;
            cout<<"Cantidad de comparaciones realizadas: " << comparaciones << endl;
            break;
            }
        }


            if (encontrado == false){
            cout<<"El n�mero " << buscar << " no se encuentra en el arreglo." << endl;
            cout<<"Cantidad de comparaciones realizadas: " << comparaciones << endl;
            }
    }

    



int main(){
    setlocale(LC_ALL, "");

    int n;
    int opcion;


    cout<<"Ingrese la cantidad de números que desea ingresar en el arreglo: ";
    cin>> n;

    int arreglo[n];
    

    cout<<"Ingrese los números del arreglo: "<<endl;
    IngresarArreglo(arreglo, n);

    cout<<"Arreglo ingresado: "<<endl;
    mostrarArreglo(arreglo, n);


    cout<<"1.Estadísticas del arreglo: "<<endl;
    cout<<"2.Buscando un número en el arreglo: "<<endl;
    cout<<endl;
    cout<<"Seleccione una opción: "<<endl;
    cin>> opcion;


    if (opcion == 1){
        estadisticasArreglo(arreglo, n);
    }
    else if (opcion == 2){
        buscarNumero(arreglo, n);
    }
    else{
        cout<<"Opción inválida." << endl;
    }



    return 0;
}
    

    