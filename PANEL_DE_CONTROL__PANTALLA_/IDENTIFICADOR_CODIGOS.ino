void IDENTIFICADOR_CODIGOS() {
  int temporal_1 = 0; //es donde se guarda el codigo ingresado por el teclado
  int temporal_2 = 0; //es donde se va a guardar la contraseña ya predefinida, en la hoja principal
  

  

  temporal_1 = (CODIGO[0] - '0') * 1000 + (CODIGO[1] - '0') * 100 + (CODIGO[2] - '0') * 10 + CODIGO[3] - '0'; //HAGO ESTO PARA CONVERTIR DE ARRAY CHAR A UN ENTERO, LE RESTA CERO X ALGO MAGICO ASI.
  temporal_2 = (CONTRASENA[0] - '0') * 1000 + (CONTRASENA[1] - '0') * 100 + (CONTRASENA[2] - '0') * 10 + CONTRASENA[3] - '0';


  if (temporal_1 == temporal_2 ) {              //necesito compararlos

    ESTADO_ACTUAL = 9999;                      //ESTE ESTADO INDICA ALARMA ACTIVADA
    ENVIAR_DATO('b');                         //INDICA A LA CENTRAL QUE ACTIVE LA ALARMA

  }

  if (temporal_1 == DESACTIVAR ) {            //necesito compararlos


    ESTADO_ACTUAL = 3333;                      //ESTE ESTADO INDICA ALARMA DESACTIVADA
    ENVIAR_DATO('c');                         //INDICA A LA CENTRAL QUE DESACTIVE LA ALARMA

  }
  CODIGO[0] = '*';                            //cambio el codigo para que no siga enviando
  CODIGO[1] = '*';
  CODIGO[2] = '*';
  CODIGO[3] = '*';


}



