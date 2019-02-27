# Objetivo
Modificar al programa init para que muestre un programa de bienvenida.

# Herramientas
gcc
make
git

# Conceptos

1) Proceso
  * Instancia de un programa.
  ** Tiene tres partes:
  ** Stack: Variables y las llamadas a funciones.
  ** Heap: memoria dinámica (malloc o new)
  ** Código.
  
  * Se crea mediante dos llamadas a sistema.
  ** fork clona
  ** exec cambia el código
  
  * Tiene un estado:
  ** Corriendo
  ** Durmiendo (Listo)
  ** Espera
  ** Completado
  ** Zombie
  
  
  2) Programa init
  
  * Es el programa encargado de inicializar el sistema operativo para dejarlo listo para usarse.
  * Es el único proceso que crea el SO
  
  * ¿Qué Aprendí?
  
  
  * URL del commit.
  
  
