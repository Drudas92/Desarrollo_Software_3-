#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void procesarA(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    procesarA(n - 1);
}

void procesarB(int n)
{
    if (n == 0)
        return;

    procesarB(n - 1);
    cout << n << " ";
}

int main()
{
    cout << "Version A: ";
    procesarA(5);
    cout << endl;

    cout << "Version B: ";
    procesarB(5);
    cout << endl;

    return 0;
}
