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
  La manera en la que los programas son ejecutados, y como el Stack utiliza sus celdas de memoria para almacenar direcciones y datos. 
  Además, la importancia de la ejecución de init, el cual es un programa escrito en el código del so para correr el resto de los procesos.
  
  * URL del commit.
  https://github.com/esaupreciado/so-gp2/commit/f1fc1b94045f1773c8b3bdfb6746d77236f49055
  
  
