#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool esPalindromoRecursivo(const string cadena, int inicio, int fin)
{

    if (inicio >= fin)
    {
        return true;
    }

    if (cadena[inicio] != cadena[fin])
    {
        return false;
    }

    return esPalindromoRecursivo(cadena, inicio + 1, fin - 1);
}

bool esPalindromo(const string &cadena)
{
    if (cadena.empty())
        return true;
    return esPalindromoRecursivo(cadena, 0, cadena.length() - 1);
}

int main()
{
    string palabra = " ";
    cin >> palabra;

    if (esPalindromo(palabra))
    {
        cout << "Verdadero " << endl;
    }
    else
    {
        cout << "Falso " << endl;
    }

    return 0;
}