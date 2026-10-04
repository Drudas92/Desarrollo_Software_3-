
// Pseudocódigo

```text
INICIO
    nota <- 0
    opcion <- 0

    MIENTRAS opcion != 2 HACER

        MOSTRAR "Ingrese la opcion"
        MOSTRAR "1. Ingresar nota"
        MOSTRAR "2. Salir"

        LEER opcion

        SI opcion = 1 ENTONCES
            MOSTRAR "Ingrese la nota"
            LEER nota

            MIENTRAS nota < 0 O nota > 5 HACER
                MOSTRAR "Ingrese una nota valida"
                LEER nota
            FIN MIENTRAS

            MOSTRAR "Su nota es: "

            SI nota < 3 ENTONCES
                MOSTRAR "Reprobado"
            SINO SI nota < 4 ENTONCES
                MOSTRAR "Aprobado"
            SINO SI nota < 4.5 ENTONCES
                MOSTRAR "Muy buena"
            SINO
                MOSTRAR "Excelente"
            FIN SI

        SINO SI opcion = 2 ENTONCES
            MOSTRAR "Saliendo del programa"
        FIN SI
    FIN MIENTRAS
FIN
```

// Rangos de clasificacion 

| Rango de la nota | Clasificación |
|---|---|
| Desde 0 hasta menos de 3 | Reprobado |
| Desde 3 hasta menos de 4 | Aprobado |
| Desde 4 hasta menos de 4.5 | Muy buena |
| Desde 4.5 hasta 5 | Excelente |
