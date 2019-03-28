## Objetivo
Hacer un planificador de procesos basado en prioridades.
El proceso con mayor prioridad de ejecuta primero y si hay dos o más iguales será el primero de la lista.

## Herramientas
git
make
gcc

## Conceptos
1)  Proceso (¿Que es un proceso? pregunta de examen: Una instancia de un programa)
2)  Planificación de procesos
      Es el mecanismo que el sistema operativo tiene para asignrle al CPU un proceso.
  
3)  Estados de un proceso:
4)  Cambio de contexto:
    Esto ocurre cuando el CPU deja de ejecutar un proceso para ejecutar otro.
    Guardar el PC y la direccion del Stack del proceso actual.
    Restaurar el PC y la dirección del nuevo proceso.
 
 
# ¿Qué aprendí?
El planificador de procesos es la parte del sistema operativo que se encarga de seleccionar a qué
proceso se le asigna el recurso procesador y durante cuánto tiempo. 

Sus principales funciones son:
 - Llevar el control del estado de cada proceso
 - Decidir qué proceso usará el procesador y durante cuanto tiempo
 - Asignar el proceso al procesador
 - Retirar el proceso del procesador, salvando el contexto de la ejecucción.


# URL del commit:
https://github.com/esaupreciado/so-gp2/commit/d6f1c2422b91510d871f2b3edd32fc6ce2671d93

# ¿Cómo se relaciona con los conceptos anteriores?
  Llamadas a sistema, procesos.
  
  

