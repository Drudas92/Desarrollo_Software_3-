#include <iostream>
using namespace std;

int contarOcurrencias(int datos[], int n, int valor)
{
    if (n == 0)
    {
        return 0;
    }

    if (datos[n - 1] == valor)
    {
        return 1 + contarOcurrencias(datos, n - 1, valor);
    }

    return contarOcurrencias(datos, n - 1, valor);
}

int main()
{
    int datos[] = {4, 7, 4, 2, 4, 9, 7};
    int n = 7;

    cout << contarOcurrencias(datos, n, 7) << endl; // 2
    cout << contarOcurrencias(datos, n, 5) << endl; // 0
    cout << contarOcurrencias(datos, n, 4) << endl; // 3

    return 0;
}
