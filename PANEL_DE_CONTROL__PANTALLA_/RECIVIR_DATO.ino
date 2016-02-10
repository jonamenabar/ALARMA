void RECIVIR_DATO() {

  byte posicion = 0;  //Variable para cambiar la posición de los caracteres del array, le pongo un numero distinto para comenzar desde otro valor
  
  char CADENA[30];    //Creo un char para recivir los datos


  if (WIFI_1.available())                         //Nos dice si hay datos dentro del buffer
  {


    for (posicion = 0; posicion <= sizeof(CADENA); posicion++)          //Mientras haya datos en el buffer ejecuta la función
    {
      delay(5);                                   //Poner un pequeño delay para mejorar la recepción de datos
      CADENA[posicion] = WIFI_1.read();           //Lee un carácter del string "cadena" de la "posicion", luego lee el siguiente carácter con "posicion++"
      
    }
    WIFI_1.flush();                               //vacio el buffer del wifi




    //-------------------------- Recorro el array para encontrar los dos puntos, y tomar el dato despues de los 2 puntos.

    for (posicion = 0; posicion <= sizeof(CADENA); posicion++)          //Mientras haya datos en el buffer ejecuta la función
    {

      if (CADENA[posicion] == ':' ) {    //busco los dos puntos y tomo el dato que le sigue en el array
        DATO = CADENA[posicion + 1];
        posicion = sizeof(CADENA);      //lo igualo para que salga del for
        
      }
    }
    WIFI_1.flush();                               //vacio el buffer del wifi


    IDENTIFICADOR_CODIGOS();                      //llamo al identificador de codigos par aque vea que es



  }

}





