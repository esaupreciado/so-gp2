## Objetivo
Modificar al programa SH.c para ejecutar el comando anterior.

## Herramientas
Git
Make
Gcc

## Conceptos
1) Como se crean nuevos procesos
* un programa padre (sh.c) ejecuta la llamada a sistema fork
* la llamada a sistema fork clona al proceso padre
* el proceso hijo manda a llamar a exec para ejecutar otro codigo

## ¿Qué aprendí?
En esta practica aprendí a realizar una nueva función en el shell, el cual almacena el último comando ingresado y bajo el comando de P lo vuelve a ejecutar.


## URL del commit
https://github.com/esaupreciado/so-gp2/commit/892340c3a06f3b20182179a2725a6ab2894feec1

## ¿Cómo se relaciona con los conceptos anteriores?
La manera en la que editamos el programa sh.c es una manera de modificar un método que opera directamente en el sistema operativo, por lo que su relación yace en el procedimiento que el sistema operativo realiza para ejecutar un programa, específicamente en el tema de manejo de instrucciones. 
