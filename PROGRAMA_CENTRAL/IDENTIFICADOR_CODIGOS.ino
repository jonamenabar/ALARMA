void IDENTIFICADOR_CODIGOS () {

   if (DATO == 'q') {            //indica coneccion exitosa
    ESTADO_ACTUAL = 2222;        
    ENVIAR_DATO('q');            // INDICA CONECCION EXITOSA
    delay(1000);
    BANDERA_ALARMA_ACTIVA = 1;   //ACTIVA LA FUNCION DE DETECTAR MOVIMIENTO
    DATO = '0';
  }
  
  
  if (DATO == 'b') {
    ESTADO_ACTUAL = 9999;        //INDICA ALARMA ACTIVA
    BANDERA_ALARMA_ACTIVA = 1;   //ACTIVA LA FUNCION DE DETECTAR MOVIMIENTO
    DATO = '0';                  //HAGO ESTO PARA EVITAR QUE SE ENVIE CONSTANTEMENTE
  }
  
  if (DATO == 'c') {
    delay(100);
    ESTADO_ACTUAL = 3333;        // INDICA ALARMA DESACTIVADA
    BANDERA_ALARMA_ACTIVA = 0;   //DESACTIVA LA FUNCION DE DETECTAR MOVIMIENTO
    DATO = '0';
  }
  













}