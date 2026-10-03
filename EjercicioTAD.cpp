#include <iostream>
using namespace std;

class Cuenta {
private:
    double saldo; 

public:
    Cuenta(double saldoInicial) {
        saldo = saldoInicial;
    }

    bool depositar(double valor) {
        if (valor < 0) {
            return false;
        }

        saldo += valor;
        return true;
    }

    bool retirar(double valor) {
        if (valor < 0 || valor > saldo) {
            return false;
        }

        saldo -= valor;
        return true;
    }

    double consultarSaldo() const {
        return saldo;
    }
};

int main() {
    Cuenta cuenta(100000); // El saldo inicial se define al crear la cuenta.
    int opcion;
    double valor;

    cout << "=== CUENTA BANCARIA ===" << endl;
    cout << "Saldo inicial: " << cuenta.consultarSaldo() << endl;

    do {
        cout << "1. Depositar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Consultar saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Valor a depositar: ";
                cin >> valor;

                if (cuenta.depositar(valor)) {
                    cout << "Nuevo saldo: " << cuenta.consultarSaldo() << endl;
                } else {
                    cout << "Operacion rechazada: no se permiten valores negativos." << endl;
                }
                break;

            case 2:
                cout << "Valor a retirar: ";
                cin >> valor;

                if (cuenta.retirar(valor)) {
                    cout << "Nuevo saldo: " << cuenta.consultarSaldo() << endl;
                } else {
                    cout << "Operacion rechazada: valor negativo o saldo insuficiente." << endl;
                }
                break;

            case 3:
                cout << "Saldo actual: " << cuenta.consultarSaldo() << endl;
                break;

            case 4:
                cout << "Hasta luego." << endl;
                break;

            default:
                cout << "Opcion no valida. Elija del 1 al 4." << endl;
        }
    } while (opcion != 4);

    return 0;
}
