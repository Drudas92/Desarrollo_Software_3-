// Simulación

| Vuelta | `opcion` ingresada | `nota` ingresada | Validación / resultado | Valores al terminar (`opcion`, `nota`) |
|---:|---:|---|---|---|
| 1 | 1 | -0.1, luego 5.1 y finalmente 0 | -0.1 y 5.1 no están entre 0 y 5, por lo que se solicitan de nuevo. Con 0 se muestra **Reprobado**. | (1, 0) |
| 2 | 1 | 2.99 | Válida; se muestra **Reprobado**. | (1, 2.99) |
| 3 | 1 | 3 | Válida; se muestra **Aprobado**. | (1, 3) |
| 4 | 1 | 3.99 | Válida; se muestra **Aprobado**. | (1, 3.99) |
| 5 | 1 | 4 | Válida; se muestra **Muy buena**. | (1, 4) |
| 6 | 1 | 4.49 | Válida; se muestra **Muy buena**. | (1, 4.49) |
| 7 | 1 | 4.5 | Válida; se muestra **Excelente**. | (1, 4.5) |
| 8 | 1 | 5 | Válida; se muestra **Excelente**. | (1, 5) |
| 9 | 2 | No se ingresa nota | Se muestra **Saliendo del programa**. La condición del ciclo (`opcion != 2`) deja de cumplirse. | (2, 5) |