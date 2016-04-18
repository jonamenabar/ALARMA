void CONTADOR_ACTIVANDO_ALARMA () {
int i=0;

  for (i = 0; i <= DELAY_ACTIVANDO_ALARMA; i++) {  /*este es el contador de 10 segundos para activar la alarma*/
    digitalWrite(30, HIGH);
    delay(500);
    digitalWrite(30, LOW);
    delay(500);
  }


}

