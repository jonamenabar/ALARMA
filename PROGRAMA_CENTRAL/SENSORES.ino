int UNAVEZrEGRESIVA = 1;
int UNAVEZeNVIA = 1;
void SENSORES() {


  if (BANDERA_ALARMA_ACTIVA == 1) {
    if (UNAVEZrEGRESIVA == 1) {
      ENVIAR_DATO('r'); //envia activando alarma
      delay (tiempo_delay_activar_alarma);
      ENVIAR_DATO('b');  //envia alarma activada
    }
  
  /*aca va la logica de los pir, cada pir asociado a un pin, lo que da la ubicacion de donde se disparo la alarma
  DENTRO DE CADA CONDICION DE SENSOR, TENES QUE ENVIAR */

  UNAVEZrEGRESIVA = 0;
  UNAVEZeNVIA = 1;
}

if (BANDERA_ALARMA_ACTIVA == 0) {
  if (UNAVEZeNVIA == 1) {
    ENVIAR_DATO('c');  //envia alarma Desactivada
  }
  UNAVEZrEGRESIVA = 1;
  UNAVEZeNVIA = 0;


}



}

