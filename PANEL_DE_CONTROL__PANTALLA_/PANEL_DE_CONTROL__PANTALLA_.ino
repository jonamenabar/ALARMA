
// include the library code:
#include <LiquidCrystal.h>
#include <Keypad.h>
#include <SoftwareSerial.h>

//###################################### VARIABLES GLOBALES ##########################################################

char DATO = 'a';                 //creo la variable donde voy a guardar lo que me llegue del AP el estado inicial es sin coneccion
char ENVIAR = '0';               //creo la variable donde voy a cargar los datos a enviar
char CODIGO [4] = {0, 0, 0, 0};  //es la variable donde guardo el codigo ingresado por teclado, despues lo uso para tomar acciones, enviar o cambiar mensajes de la pantalla
char CONTRASENA [4] = {'1', '5', '3', '4'}; //es la variable que uso para activar o desacivar la alarma
int  ESTADO_ACTUAL = 0000;       // es la variable que uso para definir el estado actual de la alarma
int FLAG_TRANSMICION = 1;       // creo una bandera para transmitir cuando este en 1 puedo transmitir, cuando este en 0 puedo recivir
int DESACTIVAR = 2828;          // es el codigo para desactivar la alarma
int DELAY_ACTIVANDO_ALARMA = 9; //el tiempo que espera para activar la alarma despues de introducir el codigo correcto
//--------------------------LCD-------------------------------------

/*  The circuit:
 * LCD RS pin to digital pin 27
 * LCD Enable pin to digital pin 26
 * LCD D4 pin to digital pin 25
 * LCD D5 pin to digital pin 24
 * LCD D6 pin to digital pin 23
 * LCD D7 pin to digital pin 22
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 220 resistencia:
 * va entre el pin 3 y la masa
 * wiper to LCD VO pin (pin 3)

 initialize the library with the numbers of the interface pins*/
LiquidCrystal lcd(27, 26, 25, 24, 23, 22);

//--------------------------TECLADO---------------------------------
const byte Filas = 4;     //Cuatro filas
const byte Cols = 4;      //Cuatro columnas

byte Pins_Filas[] = {13, 12, 11, 10};  //Pines Arduino a los que contamos las filas.
byte Pins_Cols[] = { 9, 8, 7, 6};      // Pines Arduino a los que contamos las columnas.
char Teclas [ Filas ][ Cols ] =
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

//------------------------WIFI MODULO---------------------------------
SoftwareSerial WIFI_1(53, 52); // RX | TX

//######################################SETUP##########################################################
void setup() {

  //---------CONFIGURACION PUERTO SERIE--------------------------
  Serial.begin(19200);           //Se inicia la comunicación serial

  //----------CONFIGURACION PUERTO SERIE PARA WIFI----------------
  WIFI_1.begin(19200);

  //---------CONFIGURACION LCD-----------------------------------
  // configuro la cantidad de columnas y de filas de la pantalla LCD:
  lcd.begin(16, 2);

  //---------CONFIGURACION BUFFER-----------------------------------
  pinMode(30, OUTPUT);

  //--------CREO LA CONECCION---------
  CREA_CONECCION();
  //CHEK_CONECCION ();
  
}
//#######################################LOOP#########################################################


void loop() {

  PANTALLA(DATO);

  TECLADO();

  // WIFI();                   // WIFI ES UNA FUNCION QUE REPLICA LO QUE VE EL MODULO WIFI, solo lo uso para debugear

  RECIVIR_DATO();




  IDENTIFICADOR_CODIGOS();



}
