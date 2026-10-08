# Proyecto integrador - Pseudocodigo

```text
INICIO
    cantidad <- 0

    HACER
        MOSTRAR menu de opciones
        LEER opcion

        SEGUN opcion HACER
            1:
                LEER cantidad entre 1 y 10
                LEER los numeros y guardarlos en el arreglo
            2:
                SI no hay datos, mostrar mensaje
                SINO mostrar los datos
            3:
                SI no hay datos, mostrar mensaje
                SINO recorrer el arreglo y contar los pares
            4:
                SI no hay datos, mostrar mensaje
                SINO recorrer el arreglo y contar los impares
            5:
                LEER un numero
                MOSTRAR la suma recursiva de sus digitos
            6:
                SI no hay datos, mostrar mensaje
                SINO LEER un valor y contar sus ocurrencias recursivamente
            7:
                SI no hay datos, mostrar mensaje
                SINO mostrar el arreglo recursivamente desde el final
            8:
                MOSTRAR mensaje de salida
            OTRO:
                MOSTRAR opcion invalida
        FIN SEGUN
    MIENTRAS opcion != 8
FIN
```

La opcion 1 reemplaza los datos que estaban guardados por los nuevos. El menu se repite hasta elegir la opcion 8.
