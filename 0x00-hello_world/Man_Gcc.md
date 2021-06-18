-pass-exit-codes Salida con el código de error más alto de una fase.

--help Muestra esta información.

--target-help Muestra las opciones de línea de comando específicas del destino.

--help = {common | optimizers | params | target | warnings | [^] {unido | separado | indocumentado}} [, ...].

Muestra tipos específicos de opciones de línea de comando.

(Utilice '-v --help' para mostrar las opciones de la línea de comandos de los subprocesos).

--version Muestra información sobre la versión del compilador.

-dumpspecs Muestra todas las cadenas de especificaciones integradas.

-dumpversion Muestra la versión del compilador.

-dumpmachine Muestra el procesador de destino del compilador.

-print-search-dirs Muestra los directorios en la ruta de búsqueda del compilador.

-print-libgcc-file-name Muestra el nombre de la biblioteca complementaria del compilador.

-print-file-name = <lib> Muestra la ruta completa a la biblioteca <lib>.

-print-prog-name = <prog> Muestra la ruta completa al componente del compilador <prog>.

-print-multiarch Muestra el triplete GNU normalizado del objetivo, utilizado como

un componente en la ruta de la biblioteca.

-print-multi-directory Muestra el directorio raíz para las versiones de libgcc.
-print-multi-lib Muestra el mapeo entre las opciones de la línea de comando y

                           múltiples directorios de búsqueda de bibliotecas.

-print-multi-os-directory Muestra la ruta relativa a las bibliotecas del sistema operativo.

-print-sysroot Muestra el directorio de bibliotecas de destino.

-print-sysroot-headers-suffix Muestra el sufijo sysroot utilizado para buscar encabezados.
-Wa, <opciones> Pasar <opciones> separadas por comas al ensamblador.

-Wp, <opciones> Pasa <opciones> separadas por comas al preprocesador.

-Wl, <opciones> Pasa <opciones> separadas por comas al enlazador.

-Xassembler <arg> Pasa <arg> al ensamblador.

-Xpreprocesador <arg> Pasa <arg> al preprocesador.

-Xlinker <arg> Pasa <arg> al enlazador.

-save-temps No elimina archivos intermedios.

-save-temps = <arg> No borra archivos intermedios.

-no-canonical-prefixes No canonicalizan rutas al construir relativas

                           prefijos a otros componentes de gcc.

-pipe Utiliza tuberías en lugar de archivos intermedios.

-time Tiempo de ejecución de cada subproceso.

-specs = <file> Anula las especificaciones integradas con el contenido de <file>.

-std = <estándar> Suponga que las fuentes de entrada son para <estándar>.

--sysroot = <directory> Use <directory> como directorio raíz para los encabezados

                           y bibliotecas.

-B <directorio> Agrega <directorio> a las rutas de búsqueda del compilador.

-v Muestra los programas invocados por el compilador.

- ### Como -v pero las opciones se citan y los comandos no se ejecutan.

-E Solo preproceso; no compile, ensamble ni vincule.

-S Compilar solamente; no ensamblar ni enlazar.

-c Compila y ensambla, pero no enlaza.

-o <archivo> Coloca la salida en <archivo>.

-pie Crea una posición vinculada dinámicamente independiente
ejecutable.

-shared Crea una biblioteca compartida.

-x <idioma> Especifica el idioma de los siguientes archivos de entrada.

                           Los lenguajes permitidos incluyen: ensamblador c c ++ ninguno
                           'ninguno' significa volver al comportamiento predeterminado de
                           adivinar el idioma según la extensión del archivo.

Las opciones que comienzan con -g, -f, -m, -O, -W o --param son automáticamente
pasa a los diversos subprocesos invocados por gcc. Para pasar

Otras opciones en estos procesos deben usarse las opciones -W <letter>.

Para obtener instrucciones sobre informes de errores, consulte:
<archivo: ///usr/share/doc/gcc-10/README.Bugs>.
