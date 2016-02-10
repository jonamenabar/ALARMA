void CREA_SERVER(){




WIFI_0.println("AT+CIPMUX=1"); //debe ser un println para que haga un enter despues
delay (500);


WIFI_0.println("AT+CIPSERVER=1,80");
delay(500);

ENVIAR_DATO('q');
delay(1000);
ENVIAR_DATO('b');  
}
