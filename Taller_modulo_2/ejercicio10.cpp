#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int contarDigitos(int n) {
    if (n > -10 && n < 10) return 1;
    return 1 + contarDigitos(n / 10);
}

int main() {

    ll n=0;
    cin >> n;

    cout << contarDigitos(n) << endl;

    return 0;
}