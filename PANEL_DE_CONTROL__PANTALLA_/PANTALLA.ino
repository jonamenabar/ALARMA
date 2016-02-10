
void PANTALLA(char DATOpantalla) {
  // el primer numero es la columna el segundo la fila




  switch (DATOpantalla) {

    case 'a':                                                       //las comillas esas simples, son para poder hacer un switch con un char
      lcd.setCursor(0, 0);
      lcd.print("Sin coneccion   ");
      lcd.setCursor(0, 1);
      lcd.print("    Conectando  ");
      break;

    case 'b':
      lcd.setCursor(0, 0);
      lcd.print("     Alarma     ");
      lcd.setCursor(0, 1);
      lcd.print("    Activada    ");
      break;

    case 'c':
      lcd.setCursor(0, 0);
      lcd.print("     Alarma     ");
      lcd.setCursor(0, 1);
      lcd.print("   Desactivada  ");
      break;

    case 'd':
      lcd.setCursor(0, 0);
      lcd.print("Cuenta Regresiva");
      lcd.setCursor(0, 1);
      lcd.print("   numero       ");
      break;

    case 'e':
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Ingrese Codigo: ");
      lcd.setCursor(0, 1);
      lcd.print(CODIGO);
      break;

    case 'f':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     Living     ");
      break;

    case 'g':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     Cocina     ");
      break;

    case 'h':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     lavadero   ");
      break;

    case 'i':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("  Habitacion PB ");
      break;

    case 'j':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     Baño PB    ");
      break;

    case 'k':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     Escalera   ");
      break;

    case 'l':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     Pasillo PB ");
      break;

    case 'm':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("  Pieza Chica PA");
      break;

    case 'n':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("Pieza Grande PA ");
      break;

    case 'o':
      lcd.setCursor(0, 0);
      lcd.print("Intruso Sector: ");
      lcd.setCursor(0, 1);
      lcd.print("     Baño PA    ");
      break;

    case 'p':
      lcd.setCursor(0, 0);
      lcd.print("Ingrese Clave:  ");
      lcd.setCursor(0, 1);
      lcd.print("                ");
      break;

    case 'q':
      lcd.setCursor(0, 0);
      lcd.print("Coneccion       ");
      lcd.setCursor(0, 1);
      lcd.print("         Exitosa");
      break;

    case 'r':
      lcd.setCursor(0, 0);
      lcd.print("Activando en:   ");
      lcd.setCursor(0, 1);
      lcd.print("  10 segundos   ");
      int i = 0;
      for (i = 0; i <= 9; i++) {
        digitalWrite(30, HIGH);
        delay(500);
        digitalWrite(30, LOW);
        delay(500);
      }
      break;

  }
}
