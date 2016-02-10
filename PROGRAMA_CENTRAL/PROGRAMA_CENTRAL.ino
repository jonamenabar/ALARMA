
#include <SoftwareSerial.h>

//##################################  VARIABLES GLOBALES  #################################################################
char DATO='a';                 //creo la variable donde guardo lo que me llega del servidor
char ENVIAR='0';               //es donde voy a cargar el dato a enviar
//char CONTRASENA[4]={1,5,4,3};   //     
int ESTADO_ACTUAL=9999;
int BANDERA_ALARMA_ACTIVA = 1;   //ACTIVA LA FUNCION DE DETECTAR MOVIMIENTO
int FLAG_TRANSMISION=0;          //este flag en 0 me permite recivir dato , y en 1 me permite enviar dato
int tiempo_delay_activar_alarma=10000;  //este es el tiempo de delay, que pasa desde que activas el codigo hasta que se activan los sensores

//---------------------------------  PRECONFIGURACION PARA EL SERIE DEL WIFI ----------------------------------------------
SoftwareSerial WIFI_0(53, 52); // RX | TX

void setup()
  {  Serial.begin(19200);
     WIFI_0.begin(19200);
     CREA_SERVER();
  }

void loop()
  {  
    
   
    
    RECIVIR_DATO();
    SENSORES();
    //WIFI(); //ES UNA FUNCION QUE REPLICA LO QUE VE EL MODULO WIFI
   //IDENTIFICADOR_CODIGOS();    
    
   }
