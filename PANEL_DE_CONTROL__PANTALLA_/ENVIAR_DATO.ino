void ENVIAR_DATO(char DATOlocal) {

/*-----------------------------------------------------ANTES DE ENVIAR DATO, VERIFICO SI HAY CONECCION.------------------------

 WIFI_1.println("AT+CIPSTATUS");   
 delay(500);
 RECIVIR_DATO();
 delay(500);
 if(DATO != '3'){
 PANTALLA('a');
 
 }
//-----------------------------------------------------Envio el dato previsto--------------------------------------------------*/

  WIFI_1.println("AT+CIPSEND=1,3");  //ES EL COMANDO AT PARA ENVIAR UN DATO, EL 0 INDICA EL CANAL EN ESTE CASO ES EL CANAL 0 DEL AP Y EL 3 ES LA CANTIDAD DE BITS A ENVIAR
  delay(5);
  WIFI_1.flush();   //BORRA ALGO

  WIFI_1.println(DATOlocal);
  delay(5);
  WIFI_1.flush();

  
}


