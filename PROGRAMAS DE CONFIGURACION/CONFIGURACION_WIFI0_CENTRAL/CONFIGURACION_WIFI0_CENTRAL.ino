#include <SoftwareSerial.h>

SoftwareSerial WIFI_0(53, 52); // RX | TX

void setup() {
  
//---------CONFIGURACION PUERTO SERIE-------------------------- 
   Serial.begin(19200);      //Se inicia la comunicación serial 

//----------CONFIGURACION PUERTO SERIE PARA WIFI----------------
   WIFI_0.begin(19200);

//----------CONFIGURA EL MODULO---------------------------------

CONFIGURACION_WIFI_0();
   
}




void loop() {

WIFI(); //ENVIA A LA TERMINAL DE ARDUINO LO QUE PASO EN LA TERMINAL DEL MODULO WIFI 

}
