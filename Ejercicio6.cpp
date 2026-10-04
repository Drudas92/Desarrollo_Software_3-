#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void cantidadPositivos(vector<ll> v)
{
    ll cont = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            cont++;
        }
    }
    cout << "Cantidad de numeros positivos: " << cont << endl;
}

void cantidadNegativos(vector<ll> v)
{
    ll cont = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            cont++;
        }
    }
    cout << "Cantidad de numeros negativos: " << cont << endl;
}

void cantidadPares(vector<ll> v)
{
    ll cont = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            cont++;
        }
    }
    cout << "Cantidad de numeros pares: " << cont << endl;
}

void cantidadImpares(vector<ll> v)
{
    ll cont = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 != 0)
        {
            cont++;
        }
    }
    cout << "Cantidad de numeros impares: " << cont << endl;
}

void SumaNumeros(vector<ll> v)
{
    ll suma = 0;
    for (int i = 0; i < v.size(); i++)
    {
        suma += v[i];
    }
    cout << "Suma de los numeros ingresados: " << suma << endl;
}

void promedioNumeros(vector<ll> v)
{
    ll suma = 0;
    for (int i = 0; i < v.size(); i++)
    {
        suma += v[i];
    }
    cout << "Promedio de los numeros ingresados: " << suma / v.size() << endl;
}

int main()
{

    vector<ll> v;
    ll n = 0, cont = 0;

    while (n != -1)
    {

        cin >> n;
        cont++;
        v.push_back(n);

        sort(v.begin(), v.end());

        cout << "Cantidad de numeros ingresados: " << cont << endl;

        cantidadPositivos(v);

        cantidadNegativos(v);
        
        cantidadPares(v);
        
        cantidadImpares(v);
        
        SumaNumeros(v);
        
        promedioNumeros(v);
    }

    cout << "Programa finalizado" << endl;

    return 0;
}


//¿Qué diferencia existe entre resolver este problema con while y resolverlo con un for cuyo número de iteraciones sea conocido?
//La principal diferencia es la naturaleza de la condición de terminación y la cantidad de iteraciones.