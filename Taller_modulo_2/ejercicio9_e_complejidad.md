# Ejercicio 9 - e. Complejidad temporal y espacial

Si el número tiene `d` dígitos, la función se llama una vez por cada dígito y una vez más para llegar al caso base.

| Tipo | Complejidad | Por qué |
|---|---|---|
| Tiempo | `O(d)` | Se procesa cada dígito una vez. |
| Espacio | `O(d)` | Las llamadas se guardan en la pila hasta llegar al caso base. |

Por ejemplo, para `472` se hacen las llamadas `sumaDigitos(472)`, `sumaDigitos(47)`, `sumaDigitos(4)` y `sumaDigitos(0)`.
