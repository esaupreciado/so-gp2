## Objetivo

Crear dos llamadas al sistema, una para apagar y otra para reiniciar.
Crear dos programas que utilicen las llamadas previas.

## Herramientas

* Git
* Make
* Gcc

## Conceptos

1) Llamadas a sistema: La forma que el kernel (SO) da acceso al hardware. Se implementa mediante interrupciones de software. (TRAP).
2) Modo kernel: El bit / registro que activa el CPU al acceder al hardware.
3) Solo hay un programa que se ejecuta con este bit, es el kernel.
4) Interrupciones: Es la forma que el hardware interactua con el CPU.

## ¿Qué Aprendí?

En esta practica se aprendieron los fundamentos de cómo hacer llamadas directamente al hardware, a través de las interrupciones. Así, configuramos un pequeño programa que se comunica con el ACPI de nuestra máquina virtual dandole la instrucción de apagarse o reiniciarse mandando a llamar el comando "apagar" o "reiniciar" respectivamente.

## URL del commit.



