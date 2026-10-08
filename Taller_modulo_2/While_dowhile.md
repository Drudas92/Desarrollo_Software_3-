# While do-while`

## Fragmento A

```cpp
int opcion = 0;

while (opcion != 0) {
    cout << "Ingrese una opcion: ";
    cin >> opcion;
}
```

Como opcion comienza en 0, la condicion:

opcion != 0


es falsa desde el comienzo.

Por lo tanto, el cuerpo del while se ejecuta:

0 veces

---

## Fragmento B

```cpp
int opcion = 0;

do {
    cout << "Ingrese una opcion: ";
    cin >> opcion;
} while (opcion != 0);
```

En este caso, el cuerpo se ejecuta por lo menos una vez, porque do-while primero ejecuta el bloque y despues revisa la condicion.

---

## Diferencia principal

La diferencia es el momento en que se revisa la condición.

### while

Primero revisa la condición:


condición → cuerpo


Si la condición es falsa desde el comienzo, no entra al ciclo.

### do-while

Primero ejecuta el cuerpo y después revisa la condicion:


cuerpo → condicion


Por eso siempre se ejecuta al menos una vez.


## Situación donde se puede utilizar do-while

Un ejemplo puede ser un menu de opciones.

El programa puede mostrar el menú primero y después pedirle al usuario que seleccione una opcion.

Por ejemplo:

1. Registrar usuario
2. Consultar usuario
3. Salir


El menu debe mostrarse al menos una vez, por lo que do-while puede ser util.


## Prueba de escritorio

Se utilizan las entradas:


3
2
5
0


| Iteracion | opcion ingresada | ¿opcion != 0? | ¿Continua? |
|     1     |         3        |        Si     |     Si     |
|     2     |         2        |        Si     |     Si     |
|     3     |         5        |        Si     |     Si     |
|     4     |         0        |        No     |     No     |

### Explicación

Primero se ingresa `3`, por lo que el ciclo continúa.

Después se ingresa `2`, y también continúa.

Luego se ingresa `5`, por lo que continúa nuevamente.

Finalmente se ingresa `0`. Como:


0 != 0


es falso, el ciclo termina.
