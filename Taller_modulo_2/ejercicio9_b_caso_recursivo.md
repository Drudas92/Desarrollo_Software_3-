# Ejercicio 9 - b. Caso recursivo

El caso recursivo es esta parte:

```cpp
return (n % 10) + sumaDigitos(n / 10);
```

- `n % 10` saca el último dígito.
- `n / 10` quita el último dígito.
- Luego se llama otra vez a `sumaDigitos` con el número más pequeño.

Por ejemplo, con `472` se va sacando `2`, después `7` y después `4`. Al final se suman:

```text
2 + 7 + 4 = 13
```
