# Ciclo con `continue`


```cpp
int suma = 0;

for (int i = 1; i <= 10; i++) {

    if (i % 2 == 0) {
        continue;
    }

    suma += i;
}

cout << suma;
```

## a. Prueba de escritorio

| Iteración | i | ¿Es par? | ¿Se ejecuta `suma += i`? | suma |
|     1     | 1 |    No    |             Si           |   1  |
|     2     | 2 |    Si    |             No           |   1  |
|     3     | 3 |    No    |             Si           |   4  |
|     4     | 4 |    Si    |             No           |   4  |
|     5     | 5 |    No    |             Si           |   9  |
|     6     | 6 |    Si    |             No           |   9  |
|     7     | 7 |    No    |             Si           |  16  |
|     8     | 8 |    Si    |             No           |  16  |
|     9     | 9 |    No    |             Si           |  25  |
|    10     | 10|    Si    |             No           |  25  |

## b. Salida

```text
25
```

## c. ¿Cuántas veces se ejecuta `suma += i`?

Se ejecuta 5 veces.

Se ejecuta cuando `i` es:

```text
1, 3, 5, 7 y 9
```

## d. ¿Qué elementos se están acumulando?

Se están acumulando solamente los números **impares** del 1 al 10.

La suma es:

```text
1 + 3 + 5 + 7 + 9 = 25
```

## e. ¿Qué hace `continue`?

Cuando i es par, continue hace que el programa salte el resto de esa iteración y pase directamente a la siguiente.

## f. Complejidad temporal

El ciclo recorre los números desde 1 hasta 10.

Si el límite fuera n, tendría que recorrer aproximadamente n elementos.

Por lo tanto, la complejidad temporal es:

```text
O(n)
```
