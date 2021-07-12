ESTATIC LIBRARIES.

## \*COMO CONSTRUIR UN MAKEFILE

Makefile que es?
Es una herramienta o utilidad que nos ayuda a determinar de que manera
se ejecutara nuestro programa.

Como compila un makefile
Nesecitaremos archivos que seran nuestras dependencias las cuales van a darnos
funcionalidad con nunestro archivo.

                Estas dependecias Son:
                        Archivos.o  Archivos.h  y  Archivos.c

## \*EJEMPLO PRACTICO:

programa: main.o salida.o .calculadora.o //nombre de nuestro programa y //Dpendencias para ejecutar
gcc -o main.o salida.o calculadora.o //Comando que ejecutara

//Estas son las de las que depende nuestro programa.

main.o: main.c funciones.h
gcc -c main.c

salida.o: salida.c funciones.c
gcc -c salida.c

calculadora.o: calculadora.c funciones.c
gcc -c calculadora.c

//Esta es una regla especial se trata de una regla "phony" o sea ficticia la cual nos sirve para eliminar cualquier.o y el programa.

clean:
rm -f programa \*.o

Como ejecutar la compilacion de ese programa?
para compilar esto en nuestra terminal tendrmos que ejecuta comandos con la sentencia make.

EJEMPLOS:
->$make programa //con este comando ejecutamos nnuestro programa completo.

        ->$make //compila todo nuestro programa nuevamente.

        ->

OPTMIZACION

\*\* BIBLIOTECA ESTATICA Y DINAMICA DIFERENCIAS

Una librería estática (.lib en windows, .a en linux) se carga al compilar el programa. Las funciones necesarias de esa librería se copian en tu ejecutable. Si te llevas el ejecutable de un ordenador a otro, el programa funcionará igualmente, aunque en el nuevo ordenador no esté la librería, ya que el ejecutable tiene su propia copia. El problema es que el ejecutable será más grande, ya que lleva copia de las funciones de la librería.

Una librería dinámica (.dll en windows, .so en linux) se carga en el momento de la ejecución del programa, según las va necesitando. El ejecutable NO lleva copia de las funciones de la librería y necesita la librería para funcionar. Si te llevas el ejecutable a otro ordenador, debes llevarte también la librería o asegurarte que ya está allí. La ventaja es que el ejecutable suele ser más pequeño.

Habitualmente las librerías que se usan en muchos programas o que están en el sistema operativo suelen ser dinámicas, ya que es fácil que el ordenador las tenga instaladas y te ahorra tener varias copias de ellas en varios ejecutables.

Las librerías que usa un solo programa es mejor hacerlas estáticas, salvo que sean muchas y muy grandes y te generen un ejecutable gigantesco poco manejable. Te da igual distribuir un programa pequeño con una librería al lado que sólo el programa, pero un poco más grande.

Se bueno.
