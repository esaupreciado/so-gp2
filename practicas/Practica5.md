# Objetivo
Investigar y practicar diferentes IPCS
Señales
Pipes
Memoria Compartida(Archivos mapeados a memoria)


# Herramientas
gcc

# Conceptos
+ Procesos compartidos
 + Dos o mas procesos que se comunican con un IPC

# URL del commit
https://github.com/esaupreciado/so-gp2/commit/63572e68aa09deb99ed70dac80709d9b4d39c6dd

# ¿Qué Aprendí?

La manera en la que los IPCs estan diseñados, desde FORK, SIGNAL SHARED MEMORY y MEMORY MAP. Cada uno es distinto y opera distinto. El Fork compara dos archivos, signal envía una señal definida a un proceso específico. Shared memory comparte un bloque de memoria al que todos tienen acceso desde una key y por último, memory map tiene bloques de memoria asignados a procesos los cuales leen un archivo y definen los cambios en ellos. 
