void TECLADO() {
  int i = 0;
  char MostrarIngreseClave = 'e';     //Hago que la pantalla muestre ingresar clave
  char pulsacion = Teclado1.getKey() ;

  if (pulsacion != 0) {
    
    while (i <= 3) {
      char pulsacion = Teclado1.getKey() ;
      if (pulsacion != 0 && pulsacion != '#') {                 // Si el valor es 0 es que no se ha pulsado ninguna tecla


        CODIGO[i] = pulsacion;              //voy guardando los digitos en un arreglo
        PANTALLA(MostrarIngreseClave);
        i = i + 1;
BUZZER();

      }
    }
if(i=3)
i=0;
IDENTIFICADOR_CODIGOS;  
  }

}
