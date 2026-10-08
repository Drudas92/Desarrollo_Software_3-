# Ejercicio 9 - d. Pila de llamadas

Para `sumaDigitos(472)`, las llamadas se van guardando así:

```text
sumaDigitos(472)
sumaDigitos(47)
sumaDigitos(4)
sumaDigitos(0)
```

Primero se llega al caso base (`sumaDigitos(0)`) y devuelve `0`. Después se resuelven las llamadas anteriores:

```text
sumaDigitos(4) = 4 + 0 = 4
sumaDigitos(47) = 7 + 4 = 11
sumaDigitos(472) = 2 + 11 = 13
```

La última llamada que se hizo es la primera que termina. Luego las demás van devolviendo su resultado.
