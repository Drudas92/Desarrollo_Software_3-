// Caso base

Cuando `n == 0`, el arreglo ya está vacío, por lo que no hay más elementos que revisar. La función retorna `0`:

if (n == 0)
    return 0;

// Caso recursivo

Se compara el último elemento del arreglo con el valor buscado:

if (datos[n - 1] == valor)
    return 1 + contarOcurrencias(datos, n - 1, valor);

Si coincide, se suma `1` y se sigue buscando en la parte restante del arreglo. Si no coincide, se descarta ese elemento y se sigue con la llamada recursiva:

return contarOcurrencias(datos, n - 1, valor);

// Reducción del problema

En cada llamada se reduce el tamaño del arreglo en 1:

contarOcurrencias(datos, n - 1, valor)

Esto hace que el problema vaya acercándose al caso base poco a poco.

// Número máximo de llamadas

Si el arreglo tiene `n` elementos, la cantidad máxima de llamadas es `n + 1` aproximadamente: una por cada elemento más la llamada final del caso base.

// Complejidad temporal

Cada elemento se revisa una sola vez, por lo que la complejidad es:

O(n)


// Complejidad espacial por la pila

Como la función se llama a sí misma recursivamente, cada llamada queda en la pila. En el peor caso, hay `n` llamadas activas, por lo que la complejidad espacial es:

O(n)

// Ejemplo

Para:

datos[] = {4, 7, 4, 2, 4, 9, 7};

- `contarOcurrencias(datos, 7, 7)` devuelve `2`
- `contarOcurrencias(datos, 7, 5)` devuelve `0`
- `contarOcurrencias(datos, 7, 4)` devuelve `3`

`