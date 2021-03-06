#ifndef _buttonsAndScissorsFront_h
#define _buttonsAndScissorsFront_h

/*Fucion que controla el flujo del juego, llama a Menu y recibe la opcion elegida por el usuario 
**y de acuerdo a ella continua con la ejecucion del juego
*/
void botonesyTijeras(void);

/*Imprime el menu con las opciones y devuelve la opcion elegida*/
int Menu(void);


/*Imprime el menu con las opciones posibles*/
void ImprimirMenu(void);


/*Lee de entrada estandard la opcion del menu principal elegida por el usuario*/
int LeerOpcion(void);


/*Recibe la direccion de memoria del tablero y le pide al usuario que ingrese la dimension del tablero
**valida que este dentro del rango correspondiente y si lo esta la carga en el campo correspondiente de la estructura tablero
*/
void ElegirDim(tablero * t);


/*Recibe una dimension y devuelve el nombre tiene el archivo correspondiente a esa dimension
**el nombre del archivo generado sigue los criterios especificados "dimensionxdimension" donde dimension es la variable recibida.
*/
char * GenerarNombre(int);


/*Recibe un una structura con un tablero y su dimension(ingresada por el usuario)
**lee en el archivo correspondiente a la dimension todos los tableros y de ellos elije uno aleatoriamente
**carga em ;a estructura recibida el tablero elegido
**Devuelve 0 si no ocurrieron errores, 1 si no hay archivos con esa dimension y 2 si hay un error de formato en el archivo.
*/
int GenerarTablero(tablero*);


/*Imprime por salida estandard el tablero de juego*/
void imprimir(tablero);


/*Recibe el valor del error que se produjo y imprime el mensaje correspondiente al error.*/
void imprimirErrorTablero(int error);


/*Lee de entrada estandard y analiza el comando ingresado por el usuario
** Se fija que este sea válido, respete el formato adecuadamente
** En caso de que lo sea, lo identifica y realiza las acciones correspondientes (save, quit o realizar un corte) dependiendo del comando ingresado.
*/
int LeerComando(tJuego *);


/*Recibe la direccion de memoria de la estructura juego donde estan los datos necesarios del juego, el tablero y su dimension y el modo de juego
**y actua en concordancia con el modo de juego(dos jugadores o jugagador y pc),
**imprime los puntos,el tablero,a quien le corresponde el turno y quien es el ganador de la partida.
*/
void jugar(tJuego* juego);


/*Recibe la direccion de memoria de la estructura de tipo tJuego y ejecuta el turno de un jugador persona
**Le pide al usuario que ingrese el comando y actua en corcondancia con el comando ingresado por el usuario
*/
int jugar2P(tJuego* juego);


/* Recibe un puntero a la struct tJuego, y guarda los datos de la partida en un archivo. En caso de haber podido guardar y escribir
** correctamente todos los datos en el archivo retorna 1, y en caso contrario retorna 0.
*/
int Guardar(tJuego * juego);


/*Lee de entrada estandard el nombre del archivo que el usuario quiere cargar*/
void leerNombre(tJuego* juego);


/*Recibe un puntero a una estructura donde cargara los datos leidos del archivo
**Le pide al usuario el nombre del archivo, se fija si existe y lo abre
**de acuerdo al orden especificado guarda los datos leidos en los campos de la estructura
**devuelve cero si no logra abrir el archivo y uno en caso contrario
*/
int CargarArchivo(tJuego * juego);


/*Recibe el nombre del archivo a verificar
**Intenta obtener información del archivo y guardarla en una variable
**Si el intento es exitoso devuelve 0 (el archivo existe), de lo contrario -1 por lo que el archivo no existe
**Al hacer la comparación de la función con 0, obtenemos true o false según la existencia del archivo.
*/
int Existe(char *archivo);


/*Imprime por salida estandard que ocurrio un error con la memoria y termina el programa*/
void errorMemoria(void);

#endif
