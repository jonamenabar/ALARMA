void CONFIGURACION_WIFI_0(){
WIFI_0.println("AT+CWMODE=2");   /* 1 = Station mode (client)
                                    2 = AP mode (host)
                                    3 = AP + Station mode (Yes, ESP8266 has a dual mode!)*/
delay(500);

WIFI_0.print("AT+CWSAP=");
WIFI_0.write(34);
WIFI_0.print("central_0");   //NOMBRE DEL ACCESPOINT DEBE SER DEL ESTILO esp_123
WIFI_0.write(34);
WIFI_0.print(",");
WIFI_0.write(34);
WIFI_0.print("shibato35118"); //LA CONTRASEÑA A USAR, DEBE SER DEL ESTILO 1234test, LOS NUMEROS SON:
WIFI_0.write(34); 
WIFI_0.print(",");
WIFI_0.println("5,4,3,1");
                                                                                    //  5 ES EL CANAL

                                                                                   //  EL 4 ES EL CIFRADO
                                                                                   //   0 = OPEN
                                                                                   //   2 = WPA_PSK
                                                                                   //   3 = WPA2_PSK
                                                                                   //   4 = WPA_WPA2_PSK*/

delay(500);
WIFI_0.println("AT+CIPMODE=0");  /*0: normal mode (MODO TRANSPARENTE, LO QUE LLEGA LO MANDA AL PUERTO SERIE)
                                 1: unvarnished transmission mode*/

}

