// Comparación

| Criterio | Iterativa | Recursiva |
|---|---|---|
| Número de operaciones principales | Recorre el arreglo con un ciclo | Llama a la función en cada paso |
| Tiempo | `O(n)` | `O(n)` |
| Memoria adicional | `O(1)` | `O(n)` |
| Uso de pila | No usa pila | Usa pila de llamadas |
| Legibilidad | Simple y directa | Más elegante para problemas divisivos |
| Complejidad temporal | `O(n)` | `O(n)` |
| Complejidad espacial | `O(1)` | `O(n)` |

// Idea de la solución

// Iterativa

Se recorre el arreglo desde el inicio hasta el final y se cuenta cada vez que el valor coincida con el buscado.


int contarOcurrenciasIterativo(int datos[], int n, int valor) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (datos[i] == valor) {
            contador++;
        }
    }
    return contador;
}


// Recursiva

Se reduce el problema en cada llamada y se compara el último elemento del arreglo.


int contarOcurrenciasRecursivo(int datos[], int n, int valor) {
    if (n == 0) return 0;
    if (datos[n - 1] == valor) {
        return 1 + contarOcurrenciasRecursivo(datos, n - 1, valor);
    }
    return contarOcurrenciasRecursivo(datos, n - 1, valor);
}

Pregunta

¿En este problema la recursividad aporta una ventaja clara o simplemente representa otra forma de resolverlo?

La respuesta es que, en este caso, la recursividad no aporta una ventaja clara en rendimiento. Ambas soluciones tienen la misma complejidad temporal, pero la versión recursiva usa más memoria por la pila de llamadas. La iterativa es más eficiente en espacio y también suele ser más fácil de seguir para este tipo de problema.

La recursividad solo tiene valor si el problema se puede expresar mejor como una reducción sucesiva del tamaño del problema o si se busca una solución más elegante desde el punto de vista conceptual. En este ejercicio, la forma iterativa es la más práctica y recomendable.