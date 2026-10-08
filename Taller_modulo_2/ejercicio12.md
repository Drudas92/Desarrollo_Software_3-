// Secuencia de llamadas para "radar"


1. `cadena[0]` = `'r'` y `cadena[4]` = `'r'` → iguales
2. `cadena[1]` = `'a'` y `cadena[3]` = `'a'` → iguales
3. `inicio = 2` y `fin = 2` → `inicio >= fin` es verdadero
4. Se alcanza el caso base y devuelve `true`

// ¿Dónde se alcanza el caso base?

Se alcanza cuando `inicio` y `fin` se cruzan o se encuentran en el mismo índice.

En el caso de `"radar"`:

```text
inicio = 2
fin = 2
```

Entonces:

```cpp
if (inicio >= fin)
```

se cumple, y la función devuelve `true`.
