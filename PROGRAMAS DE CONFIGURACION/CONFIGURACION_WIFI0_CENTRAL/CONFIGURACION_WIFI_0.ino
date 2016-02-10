void CONFIGURACION_WIFI_0(){
WIFI_0.println("AT+CWMODE=2");   /* 1 = Station mode (client)
                                    2 = AP mode (host)
                                    3 = AP + Station mode (Yes, ESP8266 has a dual mode!)*/
delay(2000);

WIFI_0.print("AT+CWSAP=");
WIFI_0.write(34);
WIFI_0.print("NOMBRE");   //NOMBRE DEL ACCESPOINT DEBE SER DEL ESTILO esp_123
WIFI_0.write(34);
WIFI_0.print(",");
WIFI_0.write(34);
WIFI_0.print("CONTRASEÑA,5,3"); /*LA CONTRASEÑA A USAR, DEBE SER DEL ESTILO 1234test, LOS NUMEROS SON:
                                                                                      5 ES EL CANAL

                                                                                      EL 3 ES EL CIFRADO
                                                                                      0 = OPEN
                                                                                      2 = WPA_PSK
                                                                                      3 = WPA2_PSK
                                                                                      4 = WPA_WPA2_PSK*/

delay(2000);
WIFI_0.print("AT+CIPMODE=0");  /*0: normal mode (MODO TRANSPARENTE, LO QUE LLEGA LO MANDA AL PUERTO SERIE)
                                 1: unvarnished transmission mode*/

}

