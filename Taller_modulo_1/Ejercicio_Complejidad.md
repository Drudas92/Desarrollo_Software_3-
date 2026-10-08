# Solucion Ejercicio Complejidad

### Codigo resuelto y explicado

```cpp
// 1. O(1) - Solo imprime una posicion, no depende de n ni tiene ciclos
cout << datos[0];

// 2. O(n) - Ciclo simple de 0 a n, imprime n veces
for(int i = 0; i < n; i++)
    cout << datos[i];

// 3. O(n^2) - Ciclos anidados (n * n), corre n veces por cada vuelta del externo
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        cout << datos[i][j];

// 4. O(n) - El interno siempre corre 10 veces fijas (10 * n), la constante no cuenta
for(int i = 0; i < n; i++)
    for(int j = 0; j < 10; j++)
        cout << datos[i];