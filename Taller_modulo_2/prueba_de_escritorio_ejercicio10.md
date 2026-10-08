# Prueba de escritorio

Realizar la expansión completa para:

```text
contarDigitos(5826)
```

La función divide el número entre `10` en cada llamada. Cuando queda un número de un solo dígito, devuelve `1`.

## Llamadas recursivas

```text
contarDigitos(5826)
= 1 + contarDigitos(582)
= 1 + 1 + contarDigitos(58)
= 1 + 1 + 1 + contarDigitos(5)
= 1 + 1 + 1 + 1
= 4
```

## Regreso de las llamadas

| Llamada | Cálculo | Resultado |
|---|---|---:|
| `contarDigitos(5)` | Caso base: es un solo dígito | 1 |
| `contarDigitos(58)` | `1 + contarDigitos(5)` | 2 |
| `contarDigitos(582)` | `1 + contarDigitos(58)` | 3 |
| `contarDigitos(5826)` | `1 + contarDigitos(582)` | 4 |

El número `5826` tiene **4 dígitos**.
