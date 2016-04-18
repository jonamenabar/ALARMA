void CHEK_CONECCION () {



  byte posicion = 0;                                                    //Variable para cambiar la posición de los caracteres del array, le pongo un numero distinto para comenzar desde otro valor
  char AUXULIAR[30] = {"-"};                                            //Creo un char para recivir los datos
  int ESTADO = 0;                                                      //En esta variable guardo el estado en el que esta la coneccion,
  int RESPUESTA_AT = 3;                                                 //es para comparar con el resultado que devuelve AT+CIPSTATUS, lo comparo con estado, ya convertido a entero


  //--------------------------------------------------------------Evaluo el esteado de la coneccion wifi---------------------------------------------------------------------------------------------

  WIFI_1.flush();
  WIFI_1.println("AT+CIPSTATUS");                                         //este comando AT indica el estado de la coneccion 2: Got IP 3: Connected 4: Disconnected
  delay(1);
  if (WIFI_1.available())                                                   //Nos dice si hay datos dentro del buffer
  {
    for (posicion = 0; posicion <= sizeof(AUXULIAR); posicion++)          //Mientras haya datos en el buffer ejecuta la función
    {
      delay(5);                                                           //Poner un pequeño delay para mejorar la recepción de datos
      AUXULIAR[posicion] = WIFI_1.read();                                 //Lee un carácter del string "cadena" de la "posicion", luego lee el siguiente carácter con "posicion++"
    }
    WIFI_1.flush();                                                       //vacio el buffer del wifi





    //----------------------------------------------------------- Recorro el array para encontrar los dos puntos, y tomar el dato despues de los 2 puntos.------------------------------------------


    for (posicion = 0; posicion <= sizeof(AUXULIAR); posicion++)          //Mientras haya datos en el buffer ejecuta la función
    {

      if (AUXULIAR[posicion] == ':' ) {                                   //busco los dos puntos y tomo el dato que le sigue en el array
        ESTADO = AUXULIAR[posicion + 1] - '0';                            //Guardo la respuesta ya filtrada de AT+CIPSTATUS, y lo convierto en entero restandole cero.
        posicion = sizeof(AUXULIAR);                                      //lo igualo para que salga del for

      }
    }
  }


  //--------------------------------------------------------------Reviso el estado y hasta que no este conectado, no sale----------------------------------------------------------------------------

  if (ESTADO != RESPUESTA_AT) {                                        //verifico, el estado, si es distinto de 3, re-conecto, comparo con un char ,xq es lo que llega del string
    PANTALLA('a');                                                     //sin coneccion
    CREA_CONECCION();
  }
  delay(10);
  PANTALLA('q');                                                      //coneccion exitosa
  delay(10);

}







