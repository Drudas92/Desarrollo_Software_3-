#include <bits/stdc++.h>
using namespace std;

int sumaDigitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumaDigitos(n / 10);
}

int main() {
    int n;
    cin >> n;

    cout << sumaDigitos(n) << endl;
    
    return 0;
}