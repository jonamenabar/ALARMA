void ENVIAR_DATO(char DATOlocal) {

  
  WIFI_0.println("AT+CIPSEND=0,3");  //ES EL COMANDO AT PARA ENVIAR UN DATO, EL 0 INDICA EL CANAL EN ESTE CASO ES EL CANAL 1 DEL SERVIDOR Y EL 3 ES LA CANTIDAD DE BITS A ENVIAR
  delay(5);
  WIFI_0.flush();   //BORRA ALGO

  WIFI_0.println(DATOlocal);
  delay(5);
  WIFI_0.flush();

  }



