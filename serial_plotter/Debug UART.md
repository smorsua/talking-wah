# Señal pequeña

La señal mostrada tiene valores muy bajos. Creo que debería estar entre 0.4 y -0.4, que es lo que sale en matlab.

## Diagnósticos propuestos

-   Hay delay de varios segundos entre que el audio entra al micro y se muestra en la gráfica. -> Medio confirmado, hay que evitar replotear todo
-   El audio no va entre 0.4 y -0.4 en el micro.

## Comprobaciones

-   [x] Los valores se pasan bien del micro al python

## Solución

Subir BAUD_RATE de 9600 as 115200.

# Sin enter

Algunos valores llegan concatenados, sin enter que los separe: "0.00000010.00001231230.213123123"

## Diagnosticos propuestos

-   [ ] Cambiar \n por \r\n -> Ahora envia hasta el \r.
