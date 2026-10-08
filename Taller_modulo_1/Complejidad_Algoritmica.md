# Ejercicio: Complejidad Algorítmica

---

## A. `cout << datos[0];`

* **a. ¿Qué representa n?**  
  Representa el tamaño total de la estructura de datos (el número total de elementos en el arreglo).

* **b. Número de ejecuciones de la operación principal:**  
  Se ejecuta exactamente **1 vez**, sin importar el valor de n.

* **c. Complejidad Big O:**  
  **O(1)** (Constante).

* **d. ¿Qué sucede cuando aumenta n?**  
  El tiempo de ejecución no cambia en absoluto. Aunque el arreglo tenga 10 o 1,000,000 de datos, la instrucción siempre tarda lo mismo porque accede directamente a la primera posición.
---

## B. `for(int i = 0; i < n; i++){ cout << datos[i]; }`

* **a. ¿Qué representa n?**  
  Representa la cantidad de elementos que tiene el arreglo que se va a recorrer.

* **b. Número de ejecuciones de la operación principal:**  
  Se ejecuta exactamente **n veces** (desde i = 0 hasta i = n - 1).

* **c. Complejidad Big O:**  
  **O(n)** (Lineal).

* **d. ¿Qué sucede cuando aumenta n?**  
  El trabajo o tiempo aumenta de forma directamente proporcional al valor de n. Si n se duplica, el número de iteraciones se duplica.

---

## C. `for(int i = 0; i < n; i++){ for(int j = 0; j < n; j++){ cout << datos[i][j]; } }`

* **a. ¿Qué representa n?**  
  Representa la dimensión de la matriz (número de filas y número de columnas).

* **b. Número de ejecuciones de la operación principal:**  
  Se ejecuta **n * n (n²)** veces, ya que el ciclo externo corre n veces y por cada vuelta el ciclo interno corre otras n veces.

* **c. Complejidad Big O:**  
  **O(n²)** (Cuadrática).

* **d. ¿Qué sucede cuando aumenta n?**  
  El trabajo aumenta cuadráticamente. Si n se duplica (por ejemplo, pasa de 10 a 20), el tiempo de ejecución no se duplica, sino que se multiplica por 4 (pasa de 100 a 400 operaciones).

---

## D. `for(int i = 0; i < n; i++){ for(int j = 0; j < 10; j++){ cout << datos[i]; } }`

* **a. ¿Qué representa n?**  
  Representa la cantidad de elementos que procesa el ciclo principal.

* **b. Número de ejecuciones de la operación principal:**  
  Se ejecuta **10 * n veces**, porque el ciclo interno siempre se repite 10 veces fijas por cada una de las n vueltas del ciclo externo.

* **c. Complejidad Big O:**  
  **O(n)** (Lineal).

* **d. ¿Qué sucede cuando aumenta n?**  
  Aunque hace 10 impresiones por cada elemento, el crecimiento depende únicamente de n. Si n aumenta, el trabajo crece de forma lineal (las constantes fijas como el 10 no afectan la forma en que escala el algoritmo).