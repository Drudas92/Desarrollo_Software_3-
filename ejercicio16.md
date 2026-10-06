// Versión A


void procesar(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    procesar(n - 1);
}


En esta versión, la instrucción `cout << n << " ";` está antes de la llamada recursiva.

Eso significa que se imprime el valor actual antes de resolver el caso más pequeño. Por eso la salida va en orden descendente:

5 4 3 2 1

// Versión B

void procesar(int n) {
    if (n == 0)
        return;

    procesar(n - 1);
    cout << n << " ";
}

Aquí la instrucción está después de la llamada recursiva.

Eso hace que primero se resuelva el caso más pequeño y luego se imprima el valor actual. La salida queda en orden ascendente:

1 2 3 4 5

//Actividad

Se pide determinar la salida para `procesar(5);`.

// Resultado esperado

- Versión A: `5 4 3 2 1`
- Versión B: `1 2 3 4 5`

// Idea importante

La posición de la instrucción respecto a la llamada recursiva cambia totalmente el orden de la salida.

- Si se imprime antes de llamar a la función, se obtiene un recorrido de arriba hacia abajo.
- Si se imprime después de llamar, se obtiene un recorrido de abajo hacia arriba.