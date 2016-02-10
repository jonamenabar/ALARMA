void WIFI (){
  
String B= "." ;
     if (WIFI_0.available())
         { char c = WIFI_0.read() ;
           Serial.print(c);
         }
     if (Serial.available())
         {  char c = Serial.read();
            WIFI_0.print(c);
         }
   }

