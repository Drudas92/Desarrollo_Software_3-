# Ciclo con break


```cpp
int contador = 0;

for (int i = 1; i <= 20; i++) {

    contador++;

    if (i * i > 50) {
        break;
    }
}

cout << contador;
```

## a. Prueba de escritorio

| Iteracion | i | i * i | ¿i * i > 50? | contador |
|     1     | 1 |   1   |       No     |     1    |
|     2     | 2 |   4   |       No     |     2    |
|     3     | 3 |   9   |       No     |     3    |
|     4     | 4 |   16  |       No     |     4    |
|     5     | 5 |   25  |       No     |     5    |
|     6     | 6 |   36  |       No     |     6    |
|     7     | 7 |   49  |       No     |     7    |
|     8     | 8 |   64  |       Si     |     8    |

Cuando i vale 8, se cumple:

```text
8 * 8 > 50
64 > 50
```

Por esta razón se ejecuta break.

## b. Valor de i cuando se ejecuta break

El valor es:

```text
i = 8
```

## c. ¿Cuantas iteraciones realiza realmente?

El ciclo realiza **8 iteraciones**.

Aunque el `for` tiene como limite:


i <= 20

el ciclo termina antes debido al break.

## d. Diferencia entre las dos condiciones

La condicion:


i * i > 50

hace que el ciclo termine cuando el cuadrado de i es mayor que 50.

La condicion:


i <= 20

es la condicion normal del ciclo y establece que i puede llegar hasta 20.

Sin el break el ciclo podria llegar hasta 20.

## e. ¿Cuál seria el peor caso si el límite superior fuera n?

En el peor caso, el break podría no ejecutarse rápidamente y el ciclo tendría que recorrer hasta n.

Por eso, la complejidad temporal sería:


O(n)
