void RECIVIR_DATO() {

  byte posicion = 0;  //Variable para cambiar la posición de los caracteres del array, le pongo un numero distinto para comenzar desde otro valor
  int  valor=0;        //Variable del valor entero
  char CADENA[30];    //Creo un char para recivir los datos


  if (WIFI_0.available())                         //Nos dice si hay datos dentro del buffer
  {
   
    for (posicion=0;posicion<=sizeof(CADENA);posicion++)                //Mientras haya datos en el buffer ejecuta la función
    {
      delay(5);                                   //Poner un pequeño delay para mejorar la recepción de datos
      CADENA[posicion] = WIFI_0.read();           //Lee un carácter del string "cadena" de la "posicion", luego lee el siguiente carácter con "posicion++"
      
    }
    WIFI_0.flush();                               //vacio el buffer del wifi
    
   //----------------------------IDENTIFICO EL CODIGO RECIBIDO---------------------------

      
for (posicion=0;posicion<=sizeof(CADENA);posicion++)                //Mientras haya datos en el buffer ejecuta la función
    {
      if(CADENA[posicion]==':'){
        DATO = CADENA[posicion+1];                                  //tomo el dato que sigue de los dos puntos
        posicion = sizeof(CADENA);                                  //lo igualo para que salga del ciclo
      }
      
    }
    WIFI_0.flush();

   IDENTIFICADOR_CODIGOS();
   
    
    
    
  }
}
    
