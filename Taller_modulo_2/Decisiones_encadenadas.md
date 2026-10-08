# Decisiones encadenadas

```cpp
int puntos = 73;
char categoria = 'B';

if (puntos >= 90) {
    categoria = 'A';
} else if (puntos >= 70) {
    categoria = 'B';
} else if (puntos >= 50) {
    categoria = 'C';
} else {
    categoria = 'D';
}

cout << categoria;
```

## a. Prueba de escritorio

| Paso | puntos | Condicion    | ¿Verdadera? | categoria |
|   1  |   73   | puntos >= 90 |      No     |     B     |
|   2  |   73   | puntos >= 70 |      Sí     |     B     |

La segunda condición es verdadera, se ejecuta ese bloque y las demas condiciones ya no se revisan.

## b. Salida

```text
    B
```

## c. Pruebas con otros valores

### puntos = 95

Se cumple:

```text
95 >= 90
```

Por lo tanto:

```text
categoria = A
```

Salida:

```text
A
```

### puntos = 70

Se cumple:

```text
70 >= 70
```

Por lo tanto:

```text
categoria = B
```

Salida:

```text
B
```

### puntos = 49

No se cumple ninguna de las condiciones anteriores.

Entonces, se ejecuta `else`:

```text
categoria = D
```

Salida:

```text
D
```

## d. ¿Por qué solamente se ejecuta uno de los bloques?

Porque la estructura `if - else if - else` revisa las condiciones en orden. Cuando encuentra una condición verdadera, ejecuta ese bloque y no continúa con los siguientes.
