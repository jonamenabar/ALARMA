void CREA_CONECCION(){

delay(500);//es para que espere a que se cree el sever
WIFI_1.println("AT+CIPMUX=1");
delay(10);

//esto es par poder enviar el comando AT+CIPSTART=1,"TCP","192.168.4.1",80, como no puedo enviar comillas, lo hago asi, las comillas son el 34   asi concateno y al final hago un retorno de carro
WIFI_1.print("AT+CIPSTART=1,");
WIFI_1.write(34); //escribe comillas en el serie, print y el numero escribe el caracter correspondiente en ASCII
WIFI_1.print("TCP");
WIFI_1.write(34);
WIFI_1.print(",");
WIFI_1.write(34);
WIFI_1.print("192.168.4.1");
WIFI_1.write(34);
WIFI_1.println(",80");
delay(10);

PANTALLA(DATO);
ENVIAR_DATO('q');

  
}

