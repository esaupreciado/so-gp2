# OBJETIVO
Investigar y practicar sobre hilos.

# HERRAMIENTAS
gcc
git

# CONCEPTOS
* Hilos
  ** Proceso ligero.
  ** Solo tiene un stack, código y el heap lo comparte con el proceso principal.
  ** Si el proceso principal muere, los hilos también.

* Lock
  ** Mecanismo de sincronización
  ** Variable global que soporta dos operaciones
    ** lock, el primer hilo que hace lock se adueña del lock, el resto queda en espera.
    ** unlock, libera el lock de un hilo
  ** Ayuda para resolver el problema de la sección crítica. 
  
* Semáforos
  ** Mecanismo de sincronización
  ** Variable global que tiene un valor inicial mayor o igual a 0. Soporta dos operaciones.
    ** Wait/Decrease. Si es mayor a cero decrementa y continua, si es mayor, se suspende.
    ** Post/Increase. Incrementa el valor del semáforo en uno.
  ** Para asignar recursos.

* Problemas de sincronización
  ** Condición de carrera. Ocurre cuando el resultado depende del orden en que se ejecutan los hilos.
  ** Deadlock. Ocurre cuando dos o más hilos están esperando un recurso que no se libera nunca.
  ** Productor/Consumidor. Ocurre cuando los datos se pueden sobreescribir. 
  
  
# URL DEL COMMIT


# ¿QUÉ APRENDÍ?
