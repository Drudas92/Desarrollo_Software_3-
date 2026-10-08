# Ejercicio 9 - a. Caso base

El caso base es cuando `n` vale `0`:

```cpp
if (n == 0)
    return 0;
```

Cuando llega a `0`, ya no quedan más dígitos por sumar y la función termina.

Sin este caso, la función seguiría llamándose a sí misma y no tendría dónde detenerse.
