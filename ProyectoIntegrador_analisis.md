# Proyecto integrador - Analisis

## Funciones recursivas

- `sumarDigitos`: suma los digitos del numero. Su caso base es cuando queda un solo digito (`numero < 10`); el caso recursivo suma el ultimo digito y procesa el resto.
- `contarOcurrencias`: usa la misma idea del ejercicio 13. Su caso base es `n == 0`; en cada llamada revisa un elemento y reduce `n` en uno.
- `mostrarEnReverso`: su caso base tambien es `n == 0`; imprime el ultimo elemento y luego continua con los anteriores.

Con estas funciones el programa cumple el requisito de tener al menos tres funciones recursivas.

## Funciones iterativas

Las opciones para ingresar, mostrar, contar pares e impares usan ciclos normales. Para pares e impares se recorre el arreglo una vez y se comprueba el residuo de dividir cada numero entre 2.

## Complejidad

`n` representa la cantidad de elementos y `d` la cantidad de digitos del numero.

| Operacion | Tiempo | Memoria adicional |
|---|---:|---:|
| Ingresar datos | `O(n)` | `O(1)` |
| Mostrar datos | `O(n)` | `O(1)` |
| Contar pares o impares | `O(n)` | `O(1)` |
| Sumar digitos | `O(d)` | `O(d)` por la pila recursiva |
| Contar ocurrencias | `O(n)` | `O(n)` por la pila recursiva |
| Mostrar en reverso | `O(n)` | `O(n)` por la pila recursiva |