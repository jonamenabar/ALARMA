void CONFIGURACION_WIFI_1(){

WIFI_1.println("AT+CWMODE=1");   /* 1 = Station mode (client)
                                    2 = AP mode (host)
                                    3 = AP + Station mode (Yes, ESP8266 has a dual mode!)*/
delay(2000);

WIFI_1.print("AT+CWJAP=");  //ESTE COMANDO ES PARA CONECTAR A UN AP                             
WIFI_1.write(34);           //son las comillas
WIFI_1.print("central_0");  //nombre del Acces Point
WIFI_1.write(34);
WIFI_1.print(",");
WIFI_1.write(34);
WIFI_1.print("shibato35118"); //ACA VA LA CONTRASEÑA
WIFI_1.write(34);
WIFI_1.print("");

delay(2000);
WIFI_1.print("AT+CIPMODE=0");  /*0: normal mode (MODO TRANSPARENTE, LO QUE LLEGA LO MANDA AL PUERTO SERIE)
                                 1: unvarnished transmission mode*/


}

